#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_DECOMPRESSEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D84A0)

namespace BestHTTP::Decompression
{
	inline static constexpr unsigned int DecompressedData_TypeDefinitionIndex = 23360;

	class DecompressedData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Data; // 0x10
		::System::Int32 Length; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_DECOMPRESSEDDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

