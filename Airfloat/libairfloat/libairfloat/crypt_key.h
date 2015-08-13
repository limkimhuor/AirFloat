//
//  crypt.h
//  AirFloat
//
//  Copyright (c) 2013, Kristian Trenskow All rights reserved.
//
//  Redistribution and use in source and binary forms, with or
//  without modification, are permitted provided that the following
//  conditions are met:
//
//  Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//  Redistributions in binary form must reproduce the above
//  copyright notice, this list of conditions and the following
//  disclaimer in the documentation and/or other materials provided
//  with the distribution. THIS SOFTWARE IS PROVIDED BY THE
//  COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER
//  OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
//  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
//  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
//  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
//  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#ifndef _crypt_key_h
#define _crypt_key_h

#define AIRPORT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEpQIBAAKCAQEA59dE8qLieItsH1WgjrcFRKj6eUWqi+bGLOX1HL3U3GhC/j0Qg90u3sG/1CUt\n" \
"wC5vOYvfDmFI6oSFXi5ELabWJmT2dKHzBJKa3k9ok+8t9ucRqMd6DZHJ2YCCLlDRKSKv6kDqnw4U\n" \
"wPdpOMXziC/AMj3Z/lUVX1G7WSHCAWKf1zNS1eLvqr+boEjXuBOitnZ/bDzPHrTOZz0Dew0uowxf\n" \
"/+sG+NCK3eQJVxqcaJ/vEHKIVd2M+5qL71yJQ+87X6oV3eaYvt3zWZYD6z5vYTcrtij2VZ9Zmni/\n" \
"UAaHqn9JdsBWLUEpVviYnhimNVvYFZeCXg/IdTQ+x4IRdiXNv5hEewIDAQABAoIBAQDl8Axy9XfW\n" \
"BLmkzkEiqoSwF0PsmVrPzH9KsnwLGH+QZlvjWd8SWYGN7u1507HvhF5N3drJoVU3O14nDY4TFQAa\n" \
"LlJ9VM35AApXaLyY1ERrN7u9ALKd2LUwYhM7Km539O4yUFYikE2nIPscEsA5ltpxOgUGCY7b7ez5\n" \
"NtD6nL1ZKauw7aNXmVAvmJTcuPxWmoktF3gDJKK2wxZuNGcJE0uFQEG4Z3BrWP7yoNuSK3dii2jm\n" \
"lpPHr0O/KnPQtzI3eguhe0TwUem/eYSdyzMyVx/YpwkzwtYL3sR5k0o9rKQLtvLzfAqdBxBurciz\n" \
"aaA/L0HIgAmOit1GJA2saMxTVPNhAoGBAPfgv1oeZxgxmotiCcMXFEQEWflzhWYTsXrhUIuz5jFu\n" \
"a39GLS99ZEErhLdrwj8rDDViRVJ5skOp9zFvlYAHs0xh92ji1E7V/ysnKBfsMrPkk5KSKPrnjndM\n" \
"oPdevWnVkgJ5jxFuNgxkOLMuG9i53B4yMvDTCRiIPMQ++N2iLDaRAoGBAO9v//mU8eVkQaoANf0Z\n" \
"oMjW8CN4xwWA2cSEIHkd9AfFkftuv8oyLDCG3ZAf0vrhrrtkrfa7ef+AUb69DNggq4mHQAYBp7L+\n" \
"k5DKzJrKuO0r+R0YbY9pZD1+/g9dVt91d6LQNepUE/yY2PP5CNoFmjedpLHMOPFdVgqDzDFxU8hL\n" \
"AoGBANDrr7xAJbqBjHVwIzQ4To9pb4BNeqDndk5Qe7fT3+/H1njGaC0/rXE0Qb7q5ySgnsCb3DvA\n" \
"cJyRM9SJ7OKlGt0FMSdJD5KG0XPIpAVNwgpXXH5MDJg09KHeh0kXo+QA6viFBi21y340NonnEfdf\n" \
"54PX4ZGS/Xac1UK+pLkBB+zRAoGAf0AY3H3qKS2lMEI4bzEFoHeK3G895pDaK3TFBVmD7fV0Zhov\n" \
"17fegFPMwOII8MisYm9ZfT2Z0s5Ro3s5rkt+nvLAdfC/PYPKzTLalpGSwomSNYJcB9HNMlmhkGzc\n" \
"1JnLYT4iyUyx6pcZBmCd8bD0iwY/FzcgNDaUmbX9+XDvRA0CgYEAkE7pIPlE71qvfJQgoA9em0gI\n" \
"LAuE4Pu13aKiJnfft7hIjbK+5kyb3TysZvoyDnb3HOKvInK7vXbKuU4ISgxB2bB3HcYzQMGsz1qJ\n" \
"2gG0N5hvJpzwwhbhXqFKA4zaaSrw622wDniAK5MlIE0tIAKKP4yxNGjoD2QYjhBGuhvkWKaXTyY=\n" \
"-----END RSA PRIVATE KEY-----"

#define AIRPORT_PRIVATE_KEY_P12 \
"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"

#endif
