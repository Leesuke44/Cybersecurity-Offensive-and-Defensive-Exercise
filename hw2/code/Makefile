 "Name constraints nested DNS name not permitted 1");

ok(!verify("badalt9-cert", "sslserver", ["root-cert"], ["ncca1-cert", "ncca3-cert"], ),
   "Name constraints nested DNS name not permitted 2");

ok(!verify("badalt10-cert", "sslserver", ["root-cert"], ["ncca1-cert", "ncca3-cert"], ),
   "Name constraints nested DNS name excluded");

ok(verify("ee-pss-sha1-cert", "sslserver", ["root-cert"], ["ca-cert"], ),
    "Certificate PSS signature using SHA1");

ok(verify("ee-pss-sha256-cert", "sslserver", ["root-cert"], ["ca-cert"], ),
    "CA with PSS signature using SHA256");

ok(!verify("ee-pss-sha1-cert", "sslserver", ["root-cert"], ["ca-cert"], "-auth_level", "2"),
    "Reject PSS signature using SHA1 and auth level 2");

ok(verify("ee-pss-sha256-cert", "sslserver", ["root-cert"], ["ca-cert"], "-auth_level", "2"),
    "PSS signature using SHA256 and auth level 2");

ok(!verify("many-names1", "sslserver", ["man