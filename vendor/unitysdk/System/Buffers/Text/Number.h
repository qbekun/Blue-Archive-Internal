#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_BUFFERS_TEXT_NUMBER_DECIMALTONUMBER_OFFSET UNITYSDK_OFFSET(0x92DF820)
#define SYSTEM_BUFFERS_TEXT_NUMBER_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x92DFBE0)
#define SYSTEM_BUFFERS_TEXT_NUMBER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92EA440)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Number_TypeDefinitionIndex = 25217;

	class Number : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_rgval64Power10; // 0x0
		::Il2CppArray<::System::Object*>* s_rgexp64Power10; // 0x8
		::Il2CppArray<::System::Object*>* s_rgval64Power10By16; // 0x10
		::Il2CppArray<::System::Object*>* s_rgexp64Power10By16; // 0x18

		::System::Void DecimalToNumber(::System::Decimal* arg, ::System::Buffers::Text::NumberBuffer&* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::System::Buffers::Text::NumberBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_NUMBER_DECIMALTONUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RoundNumber(::System::Buffers::Text::NumberBuffer&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Buffers::Text::NumberBuffer&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_NUMBER_ROUNDNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_NUMBER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

