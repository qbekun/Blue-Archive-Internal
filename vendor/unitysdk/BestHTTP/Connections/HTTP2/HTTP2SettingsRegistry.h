#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsManager; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Settings; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsRegistry; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x91AF70)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x91AF80)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x90CC00)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x918330)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x91AF90)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x91AFA0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AFB0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_MERGE_OFFSET UNITYSDK_OFFSET(0x91B160)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_MERGE_OFFSET UNITYSDK_OFFSET(0x91B4E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_CREATEFRAME_OFFSET UNITYSDK_OFFSET(0x91B5A0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2SettingsRegistry_TypeDefinitionIndex = 23463;

	class HTTP2SettingsRegistry : public Il2CppObject
	{
	public:
		::System::Boolean _IsReadOnly_k__BackingField; // 0x10
		Il2CppObject* OnSettingChangedEvent; // 0x18
		::Il2CppArray<::System::Object*>* values; // 0x20
		::Il2CppArray<::System::Object*>* changeFlags; // 0x28
		::System::Boolean _IsChanged_k__BackingField; // 0x30
		::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* _parent; // 0x38

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_SET_ISREADONLY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Item(::BestHTTP::Connections::HTTP2::HTTP2Settings* arg)
		{
			return (return (::System::UInt32(*)(::BestHTTP::Connections::HTTP2::HTTP2Settings*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::BestHTTP::Connections::HTTP2::HTTP2Settings* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Settings*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_GET_ISCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_IsChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_SET_ISCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsManager*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Merge(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_MERGE_OFFSET))(arg, nullptr);
		}

		::System::Void Merge(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_MERGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreateFrame()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSREGISTRY_CREATEFRAME_OFFSET))(nullptr);
		}

	};
}

