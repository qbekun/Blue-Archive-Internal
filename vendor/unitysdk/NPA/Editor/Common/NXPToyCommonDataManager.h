#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToyCommonDataManager; }
namespace NPA::Editor { class NXPToyCommonData; }
namespace NPA::Editor::Common { class NXPToySystemInfo; }

#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GET_COMMONDATA_OFFSET UNITYSDK_OFFSET(0x9C45F90)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_SET_COMMONDATA_OFFSET UNITYSDK_OFFSET(0x9C45FA0)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C45FB0)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C39790)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_RELOADDATA_OFFSET UNITYSDK_OFFSET(0x9C42FE0)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETSERVICEID_OFFSET UNITYSDK_OFFSET(0x9C46670)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETCLIENTID_OFFSET UNITYSDK_OFFSET(0x9C46690)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_REMOVECOMMONDATA_OFFSET UNITYSDK_OFFSET(0x9C466F0)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_MAKECOMMONDATA_OFFSET UNITYSDK_OFFSET(0x9C46020)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETCOMPANYNAME_OFFSET UNITYSDK_OFFSET(0x9C46760)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_SETUISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x9C46890)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETUISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x9C468C0)
#define NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C468E0)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPToyCommonDataManager_TypeDefinitionIndex = 26843;

	class NXPToyCommonDataManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::NXPToyCommonDataManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::System::Int32 krpcGameCode; // 0x10
		::NPA::Editor::NXPToyCommonData* commonData; // 0x18

		::NPA::Editor::NXPToyCommonData* get_CommonData()
		{
			return (return (::NPA::Editor::NXPToyCommonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GET_COMMONDATA_OFFSET))(nullptr);
		}

		::System::Void set_CommonData(::NPA::Editor::NXPToyCommonData* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToyCommonData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_SET_COMMONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Common::NXPToyCommonDataManager* get_Instance()
		{
			return (return (::NPA::Editor::Common::NXPToyCommonDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ReloadData(::NPA::Editor::Common::NXPToySystemInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToySystemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_RELOADDATA_OFFSET))(arg, nullptr);
		}

		::System::String* GetServiceID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETSERVICEID_OFFSET))(nullptr);
		}

		::System::String* GetClientID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETCLIENTID_OFFSET))(nullptr);
		}

		::System::Void RemoveCommonData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_REMOVECOMMONDATA_OFFSET))(nullptr);
		}

		::System::Void MakeCommonData(::NPA::Editor::Common::NXPToySystemInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToySystemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_MAKECOMMONDATA_OFFSET))(arg, nullptr);
		}

		::System::String* GetCompanyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETCOMPANYNAME_OFFSET))(nullptr);
		}

		::System::Void SetUIScaleFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_SETUISCALEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Single GetUIScaleFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_GETUISCALEFACTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYCOMMONDATAMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

