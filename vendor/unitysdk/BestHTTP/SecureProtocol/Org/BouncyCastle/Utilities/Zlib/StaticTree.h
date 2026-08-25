#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class StaticTree; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_STATICTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92CFE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_STATICTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D2C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int StaticTree_TypeDefinitionIndex = 21584;

	class StaticTree : public Il2CppObject
	{
	public:
		::System::Int32 MAX_BITS; // 0x0
		::System::Int32 BL_CODES; // 0x0
		::System::Int32 D_CODES; // 0x0
		::System::Int32 LITERALS; // 0x0
		::System::Int32 LENGTH_CODES; // 0x0
		::System::Int32 L_CODES; // 0x0
		::System::Int32 MAX_BL_BITS; // 0x0
		::Il2CppArray<::System::Object*>* static_ltree; // 0x0
		::Il2CppArray<::System::Object*>* static_dtree; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_l_desc; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_d_desc; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_bl_desc; // 0x20
		::Il2CppArray<::System::Object*>* static_tree; // 0x10
		::Il2CppArray<::System::Object*>* extra_bits; // 0x18
		::System::Int32 extra_base; // 0x20
		::System::Int32 elems; // 0x24
		::System::Int32 max_length; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_STATICTREE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_STATICTREE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

