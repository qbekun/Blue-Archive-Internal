#pragma once
#include "unitysdk.h"

#define GAUGEMAGNIFICATIONSETTINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A9840)
#define GAUGEMAGNIFICATIONSETTINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A9890)
#define GAUGEMAGNIFICATIONSETTINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A94B0)

	inline static constexpr unsigned int GaugeMagnificationSettingFormatter_TypeDefinitionIndex = 14116;

	class GaugeMagnificationSettingFormatter : public ::System::Collections::ReadOnlyCollectionBase
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEMAGNIFICATIONSETTINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEMAGNIFICATIONSETTINGFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEMAGNIFICATIONSETTINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

