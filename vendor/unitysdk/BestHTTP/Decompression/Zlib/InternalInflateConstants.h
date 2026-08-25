#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_ZLIB_INTERNALINFLATECONSTANTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E3390)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int InternalInflateConstants_TypeDefinitionIndex = 23371;

	class InternalInflateConstants : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InflateMask; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INTERNALINFLATECONSTANTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

