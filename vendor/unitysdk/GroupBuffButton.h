#pragma once
#include "unitysdk.h"

class FormationModel;
namespace UnityEngine { class GameObject; }
class MXButton;
class EchelonSlots;

#define GROUPBUFFBUTTON_ONCLICKGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x24DDB80)
#define GROUPBUFFBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x24DE0E0)
#define GROUPBUFFBUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24DE320)
#define GROUPBUFFBUTTON_ISGROUPBUFFEXIST_OFFSET UNITYSDK_OFFSET(0x24DE3A0)
#define GROUPBUFFBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DE4B0)
#define GROUPBUFFBUTTON_GETGROUPBUFFAPPLIEDSTUDENTS_OFFSET UNITYSDK_OFFSET(0x24DDD60)
#define GROUPBUFFBUTTON_REFRESH_OFFSET UNITYSDK_OFFSET(0x24DE4C0)

	inline static constexpr unsigned int GroupBuffButton_TypeDefinitionIndex = 5996;

	class GroupBuffButton : public Il2CppObject
	{
	public:
		FormationModel* formationModel; // 0x18
		::UnityEngine::GameObject* On; // 0x20
		::UnityEngine::GameObject* Off; // 0x28
		MXButton* Button; // 0x30
		EchelonSlots* echelonSlots; // 0x38
		::System::Boolean isActive; // 0x40

		::System::Void OnClickGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_ONCLICKGROUPBUFF_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(EchelonSlots* arg)
		{
			((::System::Void(*)(EchelonSlots*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGroupBuffExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_ISGROUPBUFFEXIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupBuffAppliedStudents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_GETGROUPBUFFAPPLIEDSTUDENTS_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBUTTON_REFRESH_OFFSET))(nullptr);
		}

	};

