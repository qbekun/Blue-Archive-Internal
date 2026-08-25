#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class UIScenarioMode_MainVolume;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define UISCENARIOMODE_MAINCHAPTERLIST_GET_MAINVOLUME_OFFSET UNITYSDK_OFFSET(0x27FF7F0)
#define UISCENARIOMODE_MAINCHAPTERLIST_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x27FF890)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x27FF8A0)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x27FF8B0)
#define UISCENARIOMODE_MAINCHAPTERLIST_SET_FIRSTEPISODEEXCEL_OFFSET UNITYSDK_OFFSET(0x27FF970)
#define UISCENARIOMODE_MAINCHAPTERLIST_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x27FF9A0)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27FF9B0)
#define UISCENARIOMODE_MAINCHAPTERLIST_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27FF9C0)
#define UISCENARIOMODE_MAINCHAPTERLIST_CO_PLAYUNLOCKING_OFFSET UNITYSDK_OFFSET(0x27FF9D0)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27FFA60)
#define UISCENARIOMODE_MAINCHAPTERLIST_SETCOVER_OFFSET UNITYSDK_OFFSET(0x27FFA70)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x27FFC80)
#define UISCENARIOMODE_MAINCHAPTERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FFC90)
#define UISCENARIOMODE_MAINCHAPTERLIST_SETBG_OFFSET UNITYSDK_OFFSET(0x27FFD20)
#define UISCENARIOMODE_MAINCHAPTERLIST_ONSELECTMAINVOLUME_OFFSET UNITYSDK_OFFSET(0x27FFEA0)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_FIRSTEPISODEEXCEL_OFFSET UNITYSDK_OFFSET(0x2800340)
#define UISCENARIOMODE_MAINCHAPTERLIST_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x2800360)
#define UISCENARIOMODE_MAINCHAPTERLIST_GET_BGTEXPATH_OFFSET UNITYSDK_OFFSET(0x27FFDF0)
#define UISCENARIOMODE_MAINCHAPTERLIST_CO_PLAYCONDITION_OFFSET UNITYSDK_OFFSET(0x28002D0)

	inline static constexpr unsigned int UIScenarioMode_MainChapterList_TypeDefinitionIndex = 7755;

	class UIScenarioMode_MainChapterList : public ::System::Xml::XmlDocument
	{
	public:
		UILabel* volumeTitle; // 0x90
		UITexture* bgTex; // 0x98
		::System::String* bgTex_DefaultPath; // 0xA0
		::System::String* bgTex_LastPath; // 0xA8
		::UnityEngine::GameObject* openConditionCover; // 0xB0
		Il2CppObject* conditions; // 0xB8
		UIScenarioMode_MainVolume* mainVolume; // 0xC0
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0xC8
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0xCC
		::System::Int64 _VolumeId_k__BackingField; // 0xD0
		::System::Boolean _IsOpened_k__BackingField; // 0xD8
		Il2CppObject* _FirstEpisodeExcel_k__BackingField; // 0xE0

		UIScenarioMode_MainVolume* get_MainVolume()
		{
			return ((UIScenarioMode_MainVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_MAINVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_ISOPENED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Conditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_CONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_FirstEpisodeExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SET_FIRSTEPISODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SET_ISOPENED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayUnlocking()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_CO_PLAYUNLOCKING_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void SetCover(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SETCOVER_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBg()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SETBG_OFFSET))(nullptr);
		}

		::System::Void OnSelectMainVolume(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_ONSELECTMAINVOLUME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* get_FirstEpisodeExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_FIRSTEPISODEEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_BgTexPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_GET_BGTEXPATH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayCondition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLIST_CO_PLAYCONDITION_OFFSET))(nullptr);
		}

	};

