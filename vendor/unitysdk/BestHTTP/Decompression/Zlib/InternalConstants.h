#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_ZLIB_INTERNALCONSTANTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E6C10)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int InternalConstants_TypeDefinitionIndex = 23382;

	class InternalConstants : public Il2CppObject
	{
	public:
		::System::Int32 MAX_BITS; // 0x0
		::System::Int32 BL_CODES; // 0x4
		::System::Int32 D_CODES; // 0x8
		::System::Int32 LITERALS; // 0xC
		::System::Int32 LENGTH_CODES; // 0x10
		::System::Int32 L_CODES; // 0x14
		::System::Int32 MAX_BL_BITS; // 0x18
		::System::Int32 REP_3_6; // 0x1C
		::System::Int32 REPZ_3_10; // 0x20
		::System::Int32 REPZ_11_138; // 0x24

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INTERNALCONSTANTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

