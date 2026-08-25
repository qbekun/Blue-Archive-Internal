#pragma once
#include "unitysdk.h"

class Selector;
class UIGrid;
class UIDebugDamageProgress;
class UILabel;
class Damage;
class Target;
class Path;
namespace MX::Logic::Battles { class PlayerGroup; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles::Summary { class HeroSummary; }

#define UIDEBUGDAMAGEMETER_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x23BBF20)
#define UIDEBUGDAMAGEMETER_ONCLICKPATHSELECTOR_OFFSET UNITYSDK_OFFSET(0x23BBF30)
#define UIDEBUGDAMAGEMETER_SET_PATHTYPE_OFFSET UNITYSDK_OFFSET(0x23BC0A0)
#define UIDEBUGDAMAGEMETER_UPDATE_OFFSET UNITYSDK_OFFSET(0x23BC0B0)
#define UIDEBUGDAMAGEMETER_GET_PATHTYPE_OFFSET UNITYSDK_OFFSET(0x23BC650)
#define UIDEBUGDAMAGEMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BC660)
#define UIDEBUGDAMAGEMETER_SETBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x23BBF50)
#define UIDEBUGDAMAGEMETER_COLOADPROGRESSLIST_OFFSET UNITYSDK_OFFSET(0x23BC670)
#define UIDEBUGDAMAGEMETER_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x23BC720)
#define UIDEBUGDAMAGEMETER_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x23BC8E0)
#define UIDEBUGDAMAGEMETER_CALCULATOR_OFFSET UNITYSDK_OFFSET(0x23BC8F0)
#define UIDEBUGDAMAGEMETER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x23BD330)
#define UIDEBUGDAMAGEMETER_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x23BD340)
#define UIDEBUGDAMAGEMETER_LOADPROGRESSLIST_OFFSET UNITYSDK_OFFSET(0x23BD350)
#define UIDEBUGDAMAGEMETER_ONCLICKDAMAGESELECTOR_OFFSET UNITYSDK_OFFSET(0x23BDAB0)
#define UIDEBUGDAMAGEMETER_UPDATEPROGRESSLIST_OFFSET UNITYSDK_OFFSET(0x23BC2E0)
#define UIDEBUGDAMAGEMETER_ONCLICKTARGETSELECTOR_OFFSET UNITYSDK_OFFSET(0x23BDAD0)
#define UIDEBUGDAMAGEMETER_AWAKE_OFFSET UNITYSDK_OFFSET(0x23BDAF0)

	inline static constexpr unsigned int UIDebugDamageMeter_TypeDefinitionIndex = 5247;

	class UIDebugDamageMeter : public Il2CppObject
	{
	public:
		Selector* damageSelector; // 0xD8
		Selector* targetSelector; // 0xE0
		Selector* pathSelector; // 0xE8
		UIGrid* grid; // 0xF0
		UIDebugDamageProgress* progress; // 0xF8
		UILabel* regenCost; // 0x100
		Damage* _damage_k__BackingField; // 0x108
		Target* _targetType_k__BackingField; // 0x10C
		Path* _pathType_k__BackingField; // 0x110
		Il2CppObject* progressList; // 0x118
		::MX::Logic::Battles::PlayerGroup* playerGroup; // 0x120
		::System::Text::StringBuilder* regenCostString; // 0x128
		::System::Int32 framePerSec; // 0x130

		::System::Void set_targetType(Target* arg)
		{
			((::System::Void(*)(Target*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_SET_TARGETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPathSelector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_ONCLICKPATHSELECTOR_OFFSET))(nullptr);
		}

		::System::Void set_pathType(Path* arg)
		{
			((::System::Void(*)(Path*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_SET_PATHTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_UPDATE_OFFSET))(nullptr);
		}

		Path* get_pathType()
		{
			return ((Path*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_GET_PATHTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetButtonName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_SETBUTTONNAME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadProgressList(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_COLOADPROGRESSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void Initialized(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_INITIALIZED_OFFSET))(arg, nullptr);
		}

		Damage* get_damage()
		{
			return ((Damage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_GET_DAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 Calculator(::MX::Logic::Battles::Summary::HeroSummary* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::Summary::HeroSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_CALCULATOR_OFFSET))(arg, nullptr);
		}

		Target* get_targetType()
		{
			return ((Target*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_damage(Damage* arg)
		{
			((::System::Void(*)(Damage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_SET_DAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadProgressList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_LOADPROGRESSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDamageSelector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_ONCLICKDAMAGESELECTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateProgressList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_UPDATEPROGRESSLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickTargetSelector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_ONCLICKTARGETSELECTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEMETER_AWAKE_OFFSET))(nullptr);
		}

	};

