#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonType; }
class UILabel;
class MXButton;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
class UITable;
namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define UIUSERINFO_ASSISTCHARACTERS_ONCLICKFOLD_OFFSET UNITYSDK_OFFSET(0x2582F30)
#define UIUSERINFO_ASSISTCHARACTERS_SETDATA_OFFSET UNITYSDK_OFFSET(0x257D590)
#define UIUSERINFO_ASSISTCHARACTERS__SETMYDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0x2583110)
#define UIUSERINFO_ASSISTCHARACTERS_GET_ASSISTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2583060)
#define UIUSERINFO_ASSISTCHARACTERS_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x257D8C0)
#define UIUSERINFO_ASSISTCHARACTERS__SETDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x2583140)
#define UIUSERINFO_ASSISTCHARACTERS_AWAKE_OFFSET UNITYSDK_OFFSET(0x2583160)
#define UIUSERINFO_ASSISTCHARACTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x25832C0)

	inline static constexpr unsigned int UIUserInfo_AssistCharacters_TypeDefinitionIndex = 6214;

	class UIUserInfo_AssistCharacters : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* type; // 0x18
		UILabel* title; // 0x20
		MXButton* foldButton; // 0x28
		::UnityEngine::Transform* foldDisplay; // 0x30
		::UnityEngine::GameObject* charactersRoot; // 0x38
		Il2CppObject* assistCharacters; // 0x40
		UITable* table; // 0x48

		::System::Void OnClickFold()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS_ONCLICKFOLD_OFFSET))(nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetMyData_b__11_0(::MX::GameLogic::DBModel::ClanAssistSlotDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS__SETMYDATA_B__11_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AssistCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS_GET_ASSISTCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void SetMyData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS_SETMYDATA_OFFSET))(nullptr);
		}

		::System::Boolean _SetData_b__10_0(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS__SETDATA_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTERS_.CTOR_OFFSET))(nullptr);
		}

	};

