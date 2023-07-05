# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := openssl-fipsmodule
DEFS_Debug := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DV8_IMMINENT_DEPRECATION_WARNINGS' \
	'-D_GLIBCXX_USE_CXX11_ABI=1' \
	'-DNODE_OPENSSL_CONF_NAME=nodejs_conf' \
	'-DNODE_OPENSSL_HAS_QUIC' \
	'-D__STDC_FORMAT_MACROS' \
	'-DOPENSSL_NO_PINSHARED' \
	'-DOPENSSL_THREADS' \
	'-DNDEBUG' \
	'-DOPENSSL_USE_NODELETE' \
	'-DL_ENDIAN' \
	'-DOPENSSL_BUILDING_OPENSSL' \
	'-DAES_ASM' \
	'-DBSAES_ASM' \
	'-DECP_NISTZ256_ASM' \
	'-DFIPS_MODULE' \
	'-DGHASH_ASM' \
	'-DKECCAK1600_ASM' \
	'-DOPENSSL_BN_ASM_GF2m' \
	'-DOPENSSL_BN_ASM_MONT' \
	'-DOPENSSL_BN_ASM_MONT5' \
	'-DOPENSSL_CPUID_OBJ' \
	'-DOPENSSL_IA32_SSE2' \
	'-DSHA1_ASM' \
	'-DSHA256_ASM' \
	'-DSHA512_ASM' \
	'-DVPAES_ASM' \
	'-DX25519_ASM' \
	'-DOPENSSLDIR="/etc/ssl"' \
	'-DENGINESDIR="/dev/null"' \
	'-DTERMIOS' \
	'-DDEBUG' \
	'-D_DEBUG' \
	'-DV8_ENABLE_CHECKS'

# Flags passed to all source files.
CFLAGS_Debug := \
	-pthread \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-m64 \
	-fPIC \
	-Wa,--noexecstack \
	-Wall -O3 \
	-pthread -m64 \
	-Wall -O3 \
	-Wno-missing-field-initializers \
	-Wno-old-style-declaration \
	-g \
	-O0

# Flags passed to only C files.
CFLAGS_C_Debug :=

# Flags passed to only C++ files.
CFLAGS_CC_Debug := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++17

INCS_Debug := \
	-I$(srcdir)/deps/openssl/openssl/apps/include \
	-I$(srcdir)/deps/openssl/openssl \
	-I$(srcdir)/deps/openssl/openssl/include \
	-I$(srcdir)/deps/openssl/openssl/crypto \
	-I$(srcdir)/deps/openssl/openssl/crypto/include \
	-I$(srcdir)/deps/openssl/openssl/crypto/modes \
	-I$(srcdir)/deps/openssl/openssl/crypto/ec/curve448 \
	-I$(srcdir)/deps/openssl/openssl/crypto/ec/curve448/arch_32 \
	-I$(srcdir)/deps/openssl/openssl/providers/common/include \
	-I$(srcdir)/deps/openssl/openssl/providers/implementations/include \
	-I$(srcdir)/deps/openssl/config \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/include \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/crypto \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/crypto/include/internal \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/include

DEFS_Release := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DV8_IMMINENT_DEPRECATION_WARNINGS' \
	'-D_GLIBCXX_USE_CXX11_ABI=1' \
	'-DNODE_OPENSSL_CONF_NAME=nodejs_conf' \
	'-DNODE_OPENSSL_HAS_QUIC' \
	'-D__STDC_FORMAT_MACROS' \
	'-DOPENSSL_NO_PINSHARED' \
	'-DOPENSSL_THREADS' \
	'-DNDEBUG' \
	'-DOPENSSL_USE_NODELETE' \
	'-DL_ENDIAN' \
	'-DOPENSSL_BUILDING_OPENSSL' \
	'-DAES_ASM' \
	'-DBSAES_ASM' \
	'-DECP_NISTZ256_ASM' \
	'-DFIPS_MODULE' \
	'-DGHASH_ASM' \
	'-DKECCAK1600_ASM' \
	'-DOPENSSL_BN_ASM_GF2m' \
	'-DOPENSSL_BN_ASM_MONT' \
	'-DOPENSSL_BN_ASM_MONT5' \
	'-DOPENSSL_CPUID_OBJ' \
	'-DOPENSSL_IA32_SSE2' \
	'-DSHA1_ASM' \
	'-DSHA256_ASM' \
	'-DSHA512_ASM' \
	'-DVPAES_ASM' \
	'-DX25519_ASM' \
	'-DOPENSSLDIR="/etc/ssl"' \
	'-DENGINESDIR="/dev/null"' \
	'-DTERMIOS'

# Flags passed to all source files.
CFLAGS_Release := \
	-pthread \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-m64 \
	-fPIC \
	-Wa,--noexecstack \
	-Wall -O3 \
	-pthread -m64 \
	-Wall -O3 \
	-Wno-missing-field-initializers \
	-Wno-old-style-declaration \
	-O3 \
	-fno-omit-frame-pointer

# Flags passed to only C files.
CFLAGS_C_Release :=

# Flags passed to only C++ files.
CFLAGS_CC_Release := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++17

INCS_Release := \
	-I$(srcdir)/deps/openssl/openssl/apps/include \
	-I$(srcdir)/deps/openssl/openssl \
	-I$(srcdir)/deps/openssl/openssl/include \
	-I$(srcdir)/deps/openssl/openssl/crypto \
	-I$(srcdir)/deps/openssl/openssl/crypto/include \
	-I$(srcdir)/deps/openssl/openssl/crypto/modes \
	-I$(srcdir)/deps/openssl/openssl/crypto/ec/curve448 \
	-I$(srcdir)/deps/openssl/openssl/crypto/ec/curve448/arch_32 \
	-I$(srcdir)/deps/openssl/openssl/providers/common/include \
	-I$(srcdir)/deps/openssl/openssl/providers/implementations/include \
	-I$(srcdir)/deps/openssl/config \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/include \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/crypto \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/crypto/include/internal \
	-I$(srcdir)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/include

OBJS := \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/aes/aes_ecb.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/aes/aes_misc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/asm/x86_64-gcc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_add.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_blind.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_const.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_conv.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_ctx.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_dh.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_div.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_exp.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_exp2.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_gcd.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_gf2m.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_intern.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_kron.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_mod.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_mont.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_mpi.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_mul.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_nist.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_prime.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_rand.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_recp.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_rsa_fips186_4.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_shift.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_sqr.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_sqrt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/bn_word.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/rsaz_exp.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bn/rsaz_exp_x2.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/buffer/buffer.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/cmac/cmac.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/des/des_enc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/des/ecb3_enc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/des/fcrypt_b.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/des/set_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_backend.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_check.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_group_params.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_kdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dh/dh_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_backend.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_check.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_ossl.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_sign.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/dsa/dsa_vrf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/arch_32/f_impl32.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/arch_64/f_impl64.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/curve448.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/curve448_tables.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/eddsa.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/f_generic.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve448/scalar.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/curve25519.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec2_oct.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec2_smpl.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_asn1.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_backend.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_check.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_curve.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_cvt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_kmeth.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_mult.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ec_oct.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecdh_kdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecdh_ossl.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecdsa_ossl.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecdsa_sign.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecdsa_vrf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecp_mont.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecp_nist.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecp_nistz256.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecp_oct.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecp_smpl.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecx_backend.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ec/ecx_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/asymcipher.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/dh_support.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/digest.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/ec_support.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/evp_enc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/evp_fetch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/evp_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/evp_rand.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/evp_utils.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/exchange.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/kdf_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/kdf_meth.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/kem.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/keymgmt_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/keymgmt_meth.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/m_sigver.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/mac_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/mac_meth.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/p_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/pmeth_check.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/pmeth_gn.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/pmeth_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/evp/signature.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_backend.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_dh.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_key_generate.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_key_validate.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_params.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_params_generate.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ffc/ffc_params_validate.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/hmac/hmac.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/lhash/lhash.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/asn1_dsa.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/bsearch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/context.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/core_algorithm.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/core_fetch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/core_namemap.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/cpuid.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/cryptlib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ctype.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/der_writer.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/ex_data.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/initthread.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/o_str.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/packet.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/param_build.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/param_build_set.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/params.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/params_dup.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/params_from_text.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/provider_core.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/provider_predefined.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/self_test_core.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/sparse_array.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/threads_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/threads_none.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/threads_pthread.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/threads_win.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/cbc128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/ccm128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/cfb128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/ctr128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/gcm128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/ofb128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/wrap128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/modes/xts128.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/property/defn_cache.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/property/property.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/property/property_parse.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/property/property_query.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/property/property_string.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rand/rand_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_acvp_test_params.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_backend.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_chk.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_crpt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_lib.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_mp_names.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_none.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_oaep.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_ossl.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_pk1.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_pss.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_schemes.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_sign.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_sp800_56b_check.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_sp800_56b_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/rsa/rsa_x931.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/sha/sha1dgst.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/sha/sha256.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/sha/sha3.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/sha/sha512.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/crypto/stack/stack.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_rsa_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/bio_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/capabilities.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/digest_to_nid.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/provider_seeding.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/provider_util.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/securitycheck.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/securitycheck_fips.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/fips/fipsprov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/fips/self_test.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/fips/self_test_kats.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/asymciphers/rsa_enc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_cbc_hmac_sha1_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_cbc_hmac_sha256_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_ccm.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_ccm_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_gcm.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_gcm_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_ocb.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_ocb_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_wrp.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_xts.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_xts_fips.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_aes_xts_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_cts.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_tdes.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_tdes_common.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/cipher_tdes_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/digests/sha2_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/digests/sha3_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/exchange/dh_exch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/exchange/ecdh_exch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/exchange/ecx_exch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/exchange/kdf_exch.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/hkdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/kbkdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/pbkdf2.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/pbkdf2_fips.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/sshkdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/sskdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/tls1_prf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kdfs/x942kdf.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/kem/rsa_kem.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/dh_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/dsa_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/ec_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/ecx_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/kdf_legacy_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/mac_legacy_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/keymgmt/rsa_kmgmt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/macs/cmac_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/macs/gmac_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/macs/hmac_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/macs/kmac_prov.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/rands/crngt.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/rands/drbg.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/rands/drbg_ctr.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/rands/drbg_hash.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/rands/drbg_hmac.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/rands/test_rng.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/signature/dsa_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/signature/ecdsa_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/signature/eddsa_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/signature/mac_legacy_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/signature/rsa_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/ssl/s3_cbc.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_dsa_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_dsa_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_ec_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_ec_sig.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_ecx_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/der/der_rsa_key.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/provider_ctx.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/common/provider_err.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon_block.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon_ccm.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon_ccm_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon_gcm.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon_gcm_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/ciphers/ciphercommon_hw.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/implementations/digests/digestcommon.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/ssl/record/tls_pad.o \
	$(obj).target/$(TARGET)/deps/openssl/openssl/providers/fips/fips_entry.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/aes-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/aesni-mb-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/aesni-sha1-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/aesni-sha256-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/aesni-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/bsaes-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/aes/vpaes-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/bn/rsaz-avx2.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/bn/rsaz-avx512.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/bn/rsaz-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/bn/x86_64-gf2m.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/bn/x86_64-mont.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/bn/x86_64-mont5.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/camellia/cmll-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/chacha/chacha-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/ec/ecp_nistz256-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/ec/x25519-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/x86_64cpuid.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/md5/md5-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/modes/aesni-gcm-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/modes/ghash-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/poly1305/poly1305-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/rc4/rc4-md5-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/rc4/rc4-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/sha/keccak1600-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/sha/sha1-mb-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/sha/sha1-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/sha/sha256-mb-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/sha/sha256-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/sha/sha512-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/crypto/whrlpool/wp-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/engines/e_padlock-x86_64.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_sm2_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_digests_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_dsa_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_ec_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_ecx_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_rsa_gen.o \
	$(obj).target/$(TARGET)/deps/openssl/config/archs/linux-x86_64/asm/providers/common/der/der_wrap_gen.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our dependencies are built before any of us.
$(OBJS): | $(builddir)/openssl-cli

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.c FORCE_DO_CMD
	@$(call do_cmd,cc,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.s FORCE_DO_CMD
	@$(call do_cmd,cc,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.c FORCE_DO_CMD
	@$(call do_cmd,cc,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.s FORCE_DO_CMD
	@$(call do_cmd,cc,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.c FORCE_DO_CMD
	@$(call do_cmd,cc,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.s FORCE_DO_CMD
	@$(call do_cmd,cc,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Debug := \
	-pthread \
	-rdynamic \
	-m64 \
	-Wl,--version-script=$(builddir)/../../deps/openssl/config/archs/linux-x86_64/asm/providers/fips.ld

LDFLAGS_Release := \
	-pthread \
	-rdynamic \
	-m64 \
	-Wl,--version-script=$(builddir)/../../deps/openssl/config/archs/linux-x86_64/asm/providers/fips.ld

LIBS := \
	-ldl -pthread

$(obj).target/deps/openssl/libopenssl-fipsmodule.so: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/deps/openssl/libopenssl-fipsmodule.so: LIBS := $(LIBS)
$(obj).target/deps/openssl/libopenssl-fipsmodule.so: LD_INPUTS := $(OBJS)
$(obj).target/deps/openssl/libopenssl-fipsmodule.so: TOOLSET := $(TOOLSET)
$(obj).target/deps/openssl/libopenssl-fipsmodule.so: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,solink)

all_deps += $(obj).target/deps/openssl/libopenssl-fipsmodule.so
# Add target alias
.PHONY: openssl-fipsmodule
openssl-fipsmodule: $(builddir)/libopenssl-fipsmodule.so

# Copy this to the shared library output path.
$(builddir)/libopenssl-fipsmodule.so: TOOLSET := $(TOOLSET)
$(builddir)/libopenssl-fipsmodule.so: $(obj).target/deps/openssl/libopenssl-fipsmodule.so FORCE_DO_CMD
	$(call do_cmd,copy)

all_deps += $(builddir)/libopenssl-fipsmodule.so
# Short alias for building this shared library.
.PHONY: libopenssl-fipsmodule.so
libopenssl-fipsmodule.so: $(obj).target/deps/openssl/libopenssl-fipsmodule.so $(builddir)/libopenssl-fipsmodule.so
