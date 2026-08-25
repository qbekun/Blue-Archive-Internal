#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate { class NXPPlateDialog; }
namespace NPA::Editor::Base { class NXPDialogBase; }
namespace NPA::Editor::Contents { class NXPToyPlateManager; }
namespace NPA { class NPCSInfo; }
namespace NPA::Editor::Auth { class INXPAuthEx; }
namespace NPA::Editor::Plate { class GameRatingInfo; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::Network { class NXPBasePlateRecipeInfo; }
namespace NPA::Editor::Network { class NXPBasePlateInfo; }

#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C3F510)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C3F740)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C3FA90)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C3FAE0)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_CLOSEPLATE_OFFSET UNITYSDK_OFFSET(0x9C3FCA0)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C40020)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9C40240)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C403F0)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWNEXONUNREGISTER_OFFSET UNITYSDK_OFFSET(0x9C40580)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWUSERCONSENT_OFFSET UNITYSDK_OFFSET(0x9C40770)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9C40980)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWBASEPLATE_OFFSET UNITYSDK_OFFSET(0x9C3F830)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_GETBASEPLATEINFO_OFFSET UNITYSDK_OFFSET(0x9C40E70)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_CHECKPLATEITEMS_OFFSET UNITYSDK_OFFSET(0x9C40FB0)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYKRPCACCOUNTDELETIONRECIPE_OFFSET UNITYSDK_OFFSET(0x9C415B0)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYGLOBALACCOUNTDELETIONRECIPE_OFFSET UNITYSDK_OFFSET(0x9C41670)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYMYACCOUNTIALRECIPE_OFFSET UNITYSDK_OFFSET(0x9C41730)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYCUSTOMERCENTERRECIPE_OFFSET UNITYSDK_OFFSET(0x9C417B0)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3F730)
#define NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C41870)

namespace NPA::Editor::Contents
{
	inline static constexpr unsigned int NXPToyPlateManager_TypeDefinitionIndex = 26832;

	class NXPToyPlateManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::NXPPlateDialog* currentPlateDialog; // 0x10
		::NPA::Editor::Base::NXPDialogBase* currentOpenedDialog; // 0x18
		::NPA::Editor::Contents::NXPToyPlateManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8

		::NPA::Editor::Contents::NXPToyPlateManager* get_Instance()
		{
			return (return (::NPA::Editor::Contents::NXPToyPlateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWPLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::NPA::Editor::Auth::INXPAuthEx* arg, ::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::INXPAuthEx*, ::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClosePlate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_CLOSEPLATE_OFFSET))(nullptr);
		}

		::System::Void ShowUserInfo(::System::String* str, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWUSERINFO_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowGameInfo(::System::String* str, ::NPA::Editor::Plate::GameRatingInfo* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Plate::GameRatingInfo*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWGAMEINFO_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ShowTermsList(::System::String* str, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWTERMSLIST_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowNexonUnregister(::System::String* str, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWNEXONUNREGISTER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowUserConsent(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWUSERCONSENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ShowOpenApiPolicy(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWOPENAPIPOLICY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowBasePlate(::NPA::Editor::Auth::INXPAuthEx* arg, ::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::INXPAuthEx*, ::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOWBASEPLATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetBasePlateInfo(::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_GETBASEPLATEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckPlateItems(::NPA::Editor::Network::NXPBasePlateInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_CHECKPLATEITEMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldDisplayKRPCAccountDeletionRecipe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYKRPCACCOUNTDELETIONRECIPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldDisplayGlobalAccountDeletionRecipe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYGLOBALACCOUNTDELETIONRECIPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldDisplayMyAccountIALRecipe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYMYACCOUNTIALRECIPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldDisplayCustomerCenterRecipe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_SHOULDDISPLAYCUSTOMERCENTERRECIPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_CONTENTS_NXPTOYPLATEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

