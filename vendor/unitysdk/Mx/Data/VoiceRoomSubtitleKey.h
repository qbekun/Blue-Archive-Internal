#pragma once
#include "../../unitysdk.h"

#define MX_DATA_VOICEROOMSUBTITLEKEY_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1862DC0)
#define MX_DATA_VOICEROOMSUBTITLEKEY_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1862DD0)
#define MX_DATA_VOICEROOMSUBTITLEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1862DE0)
#define MX_DATA_VOICEROOMSUBTITLEKEY_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1862E20)

namespace MX::Data
{
	inline static constexpr unsigned int VoiceRoomSubtitleKey_TypeDefinitionIndex = 15913;

	class VoiceRoomSubtitleKey : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10
		::System::Int64 _CharacterVoiceGroupId_k__BackingField; // 0x18
		::System::String* _LocalizeCVGroup_k__BackingField; // 0x20

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMSUBTITLEKEY_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMSUBTITLEKEY_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMSUBTITLEKEY_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VOICEROOMSUBTITLEKEY_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

	};
}

