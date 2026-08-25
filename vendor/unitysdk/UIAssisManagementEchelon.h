#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace FlatData { class EchelonType; }

#define UIASSISMANAGEMENTECHELON_RESETASSISTMANAGEMENTSLOTS_OFFSET UNITYSDK_OFFSET(0x2208560)
#define UIASSISMANAGEMENTECHELON_GET_ASSISTMANAGEMENTSLOTS_OFFSET UNITYSDK_OFFSET(0x2209140)
#define UIASSISMANAGEMENTECHELON_GET_OFF_OFFSET UNITYSDK_OFFSET(0x2209260)
#define UIASSISMANAGEMENTECHELON_INTITIALIZE_OFFSET UNITYSDK_OFFSET(0x2209320)
#define UIASSISMANAGEMENTECHELON_GET_ON_OFFSET UNITYSDK_OFFSET(0x2209460)
#define UIASSISMANAGEMENTECHELON_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x2209520)
#define UIASSISMANAGEMENTECHELON_SETDATA_OFFSET UNITYSDK_OFFSET(0x2208630)
#define UIASSISMANAGEMENTECHELON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2209B50)

	inline static constexpr unsigned int UIAssisManagementEchelon_TypeDefinitionIndex = 4342;

	class UIAssisManagementEchelon : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* echelonRoot; // 0x10
		::UnityEngine::GameObject* _On; // 0x18
		::UnityEngine::GameObject* _Off; // 0x20
		Il2CppObject* assistManagementSlots; // 0x28
		UILabel* _Title; // 0x30

		::System::Void ResetAssistManagementSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_RESETASSISTMANAGEMENTSLOTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistManagementSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_GET_ASSISTMANAGEMENTSLOTS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Off()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_GET_OFF_OFFSET))(nullptr);
		}

		::System::Void Intitialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_INTITIALIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_On()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_GET_ON_OFFSET))(nullptr);
		}

		UILabel* get_Title()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::EchelonType* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISMANAGEMENTECHELON_.CTOR_OFFSET))(nullptr);
		}

	};

