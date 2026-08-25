#pragma once
#include "unitysdk.h"

#define CONTROLITEMJSON_FROMCONTROLITEMS_OFFSET UNITYSDK_OFFSET(0x9F723E0)
#define CONTROLITEMJSON_TOLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F71B20)
#define CONTROLITEMJSON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F73180)

	inline static constexpr unsigned int ControlItemJson_TypeDefinitionIndex = 28857;

	class ControlItemJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* layout; // 0x18
		::System::String* variants; // 0x20
		::System::String* usage; // 0x28
		::System::String* alias; // 0x30
		::System::String* useStateFrom; // 0x38
		::System::UInt32 offset; // 0x40
		::System::UInt32 bit; // 0x44
		::System::UInt32 sizeInBits; // 0x48
		::System::String* format; // 0x50
		::System::Int32 arraySize; // 0x58
		::Il2CppArray<::System::Object*>* usages; // 0x60
		::Il2CppArray<::System::Object*>* aliases; // 0x68
		::System::String* parameters; // 0x70
		::System::String* processors; // 0x78
		::System::String* displayName; // 0x80
		::System::String* shortDisplayName; // 0x88
		::System::Boolean noisy; // 0x90
		::System::Boolean dontReset; // 0x91
		::System::Boolean synthetic; // 0x92
		::System::String* defaultState; // 0x98
		::System::String* minValue; // 0xA0
		::System::String* maxValue; // 0xA8

		::Il2CppArray<::System::Object*>* FromControlItems(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEMJSON_FROMCONTROLITEMS_OFFSET))(arg, nullptr);
		}

		ControlItem* ToLayout()
		{
			return (return (ControlItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEMJSON_TOLAYOUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEMJSON_.CTOR_OFFSET))(nullptr);
		}

	};

