#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPToyUserManager; }
namespace NPA::Editor { class NXPToyPrefs; }
namespace NPA::Editor { class NXPToyLocalSessionType; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CAFC30)
#define NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9CAFCB0)
#define NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x9CAFED0)
#define NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_GETMEMTYPEFROMSIGNINRESULT_OFFSET UNITYSDK_OFFSET(0x9CB00C0)
#define NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CB0330)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPToyUserManager_TypeDefinitionIndex = 27176;

	class NXPToyUserManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPToyUserManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::NXPToyPrefs* commonPrefCtl; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::NXPToyUserManager* get_Instance()
		{
			return (return (::NPA::Editor::Auth::NXPToyUserManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMemTypeFromSignInResult(::NPA::Editor::NXPToyLocalSessionType* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::NXPToyLocalSessionType*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_GETMEMTYPEFROMSIGNINRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYUSERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

