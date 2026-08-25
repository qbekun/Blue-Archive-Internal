#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Language; }

#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D28090)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GETSCENARIORESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x1D280A0)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GET_LASTOPENEDID_OFFSET UNITYSDK_OFFSET(0x1D28180)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SETSCENARIORESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x1D28190)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GETSCENARIORESOURCEINFORANDOM_OFFSET UNITYSDK_OFFSET(0x1D28840)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SET_LASTOPENEDID_OFFSET UNITYSDK_OFFSET(0x1D288C0)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D288D0)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D288E0)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D28930)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D28980)
#define MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D28990)

namespace MX::SaveData
{
	inline static constexpr unsigned int TitleVideoAudioSaveData_TypeDefinitionIndex = 20017;

	class TitleVideoAudioSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* saved; // 0x10
		::System::Int64 _LastOpenedId_k__BackingField; // 0x18
		::System::Int32 _Version_k__BackingField; // 0x20

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		SavedScenarioResourceInfo* GetScenarioResourceInfo(::System::Int64 arg)
		{
			return (return (SavedScenarioResourceInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GETSCENARIORESOURCEINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastOpenedId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GET_LASTOPENEDID_OFFSET))(nullptr);
		}

		::System::Void SetScenarioResourceInfo(Il2CppObject* arg, ::FlatData::Language* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::Language*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SETSCENARIORESOURCEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		SavedScenarioResourceInfo* GetScenarioResourceInfoRandom()
		{
			return (return (SavedScenarioResourceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GETSCENARIORESOURCEINFORANDOM_OFFSET))(nullptr);
		}

		::System::Void set_LastOpenedId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SET_LASTOPENEDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_Version(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TITLEVIDEOAUDIOSAVEDATA_SET_VERSION_OFFSET))(arg, nullptr);
		}

	};
}

