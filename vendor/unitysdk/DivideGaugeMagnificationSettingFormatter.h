#pragma once
#include "unitysdk.h"

#define DIVIDEGAUGEMAGNIFICATIONSETTINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A90A0)
#define DIVIDEGAUGEMAGNIFICATIONSETTINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A9050)
#define DIVIDEGAUGEMAGNIFICATIONSETTINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A90F0)

	inline static constexpr unsigned int DivideGaugeMagnificationSettingFormatter_TypeDefinitionIndex = 14113;

	class DivideGaugeMagnificationSettingFormatter : public ::System::Diagnostics::Debugger
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + DIVIDEGAUGEMAGNIFICATIONSETTINGFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIVIDEGAUGEMAGNIFICATIONSETTINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + DIVIDEGAUGEMAGNIFICATIONSETTINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

