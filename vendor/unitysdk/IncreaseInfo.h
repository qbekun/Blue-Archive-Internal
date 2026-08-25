#pragma once
#include "unitysdk.h"

namespace FlatData { class EventTargetType; }
namespace MX::Core::Math { class BasisPoint; }

#define INCREASEINFO_SET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x18635F0)
#define INCREASEINFO_GET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1863600)
#define INCREASEINFO_GET_INCREASERATIO_OFFSET UNITYSDK_OFFSET(0x1863610)
#define INCREASEINFO_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1863620)
#define INCREASEINFO_GET_SHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1863630)
#define INCREASEINFO_SET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1863640)
#define INCREASEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18635D0)
#define INCREASEINFO_SET_INCREASERATIO_OFFSET UNITYSDK_OFFSET(0x1863650)
#define INCREASEINFO_SET_SHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1863660)

	inline static constexpr unsigned int IncreaseInfo_TypeDefinitionIndex = 15915;

	class IncreaseInfo : public Il2CppObject
	{
	public:
		::FlatData::EventTargetType* _EventTargetType_k__BackingField; // 0x10
		::MX::Core::Math::BasisPoint* _IncreaseRatio_k__BackingField; // 0x18
		::FlatData::EventTargetType* _ShortcutEventTargetType_k__BackingField; // 0x20
		::System::UInt32 _LocalizeCodeId_k__BackingField; // 0x24

		::System::Void set_EventTargetType(::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_SET_EVENTTARGETTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventTargetType* get_EventTargetType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_GET_EVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_IncreaseRatio()
		{
			return (return (::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_GET_INCREASERATIO_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_ShortcutEventTargetType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_GET_SHORTCUTEVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeCodeId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_SET_LOCALIZECODEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IncreaseRatio(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_SET_INCREASERATIO_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShortcutEventTargetType(::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + INCREASEINFO_SET_SHORTCUTEVENTTARGETTYPE_OFFSET))(arg, nullptr);
		}

	};

