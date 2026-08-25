#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIScenarioScriptLogUnit;
namespace UnityEngine { class Transform; }

#define UISCENARIOSCRIPTLOGPOPULATOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x27E6D10)
#define UISCENARIOSCRIPTLOGPOPULATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E6D40)
#define UISCENARIOSCRIPTLOGPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x27E6D70)
#define UISCENARIOSCRIPTLOGPOPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E74B0)
#define UISCENARIOSCRIPTLOGPOPULATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27E74F0)
#define UISCENARIOSCRIPTLOGPOPULATOR_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x27E75F0)
#define UISCENARIOSCRIPTLOGPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x27E78D0)
#define UISCENARIOSCRIPTLOGPOPULATOR_GETHEIGHTFORINIT_OFFSET UNITYSDK_OFFSET(0x27E7800)
#define UISCENARIOSCRIPTLOGPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x27E7930)
#define UISCENARIOSCRIPTLOGPOPULATOR_YIELDREFRESH_OFFSET UNITYSDK_OFFSET(0x27E7580)
#define UISCENARIOSCRIPTLOGPOPULATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0x27E79B0)

	inline static constexpr unsigned int UIScenarioScriptLogPopulator_TypeDefinitionIndex = 7689;

	class UIScenarioScriptLogPopulator : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::ParameterUtilities
	{
	public:
		::UnityEngine::GameObject* logEmptyLabel; // 0x58

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PrepareListItemWithIndex(UIScenarioScriptLogUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIScenarioScriptLogUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitListItemWithIndex(UIScenarioScriptLogUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIScenarioScriptLogUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_INITLISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Single GetHeightForInit(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_GETHEIGHTFORINIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldRefresh()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_YIELDREFRESH_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGPOPULATOR_CLEAR_OFFSET))(nullptr);
		}

	};

