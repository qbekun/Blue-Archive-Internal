#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
namespace MXUnderCover { class UCSectionModel; }
namespace MXUnderCover { class UCDesignLevel; }
namespace MX::AssetBundles { class LoadedSceneHandle; }
namespace UnityEngine { class Light; }
class CoroutineAsyncOperation;

#define MXUNDERCOVER_UCSECTIONVISUAL_CREATEVISUAL_OFFSET UNITYSDK_OFFSET(0xDAD5D0)
#define MXUNDERCOVER_UCSECTIONVISUAL_DESTROYVISUAL_OFFSET UNITYSDK_OFFSET(0xDAD6F0)
#define MXUNDERCOVER_UCSECTIONVISUAL_SET_COROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDAD870)
#define MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVESECTION_OFFSET UNITYSDK_OFFSET(0xDAD880)
#define MXUNDERCOVER_UCSECTIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDADA30)
#define MXUNDERCOVER_UCSECTIONVISUAL_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xDADA40)
#define MXUNDERCOVER_UCSECTIONVISUAL_CO_INSTANTIATEDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xDADA50)
#define MXUNDERCOVER_UCSECTIONVISUAL_CO_INIT_OFFSET UNITYSDK_OFFSET(0xDADAE0)
#define MXUNDERCOVER_UCSECTIONVISUAL_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xDADBB0)
#define MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVESCENEOBJECT_OFFSET UNITYSDK_OFFSET(0xDAD910)
#define MXUNDERCOVER_UCSECTIONVISUAL_CO_LOADDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xDADBC0)
#define MXUNDERCOVER_UCSECTIONVISUAL_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xDADC50)
#define MXUNDERCOVER_UCSECTIONVISUAL_GET_COROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDADC70)
#define MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVEDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xDAD990)
#define MXUNDERCOVER_UCSECTIONVISUAL_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xDADC80)
#define MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0xDADC90)
#define MXUNDERCOVER_UCSECTIONVISUAL_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xDADD00)
#define MXUNDERCOVER_UCSECTIONVISUAL_CO_LOADARTLEVEL_OFFSET UNITYSDK_OFFSET(0xDADD10)
#define MXUNDERCOVER_UCSECTIONVISUAL_ENABLEDIRECTIONALLIGHT_OFFSET UNITYSDK_OFFSET(0xDADDA0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSectionVisual_TypeDefinitionIndex = 9925;

	class UCSectionVisual : public Il2CppObject
	{
	public:
		::UnityEngine::MonoBehaviour* _CoroutineHandler_k__BackingField; // 0x10
		::MXUnderCover::UCSectionModel* _Model_k__BackingField; // 0x18
		::MXUnderCover::UCDesignLevel* _DesignLevel_k__BackingField; // 0x20
		::System::Boolean designLevelActiveBackup; // 0x28
		::System::Boolean designLevelCamActiveBackup; // 0x29
		::MX::AssetBundles::LoadedSceneHandle* artLevelHandle; // 0x30
		::UnityEngine::Light* directionalLight; // 0x58

		Il2CppObject* CreateVisual(::UnityEngine::MonoBehaviour* arg, ::MXUnderCover::UCSectionModel* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::UnityEngine::MonoBehaviour*, ::MXUnderCover::UCSectionModel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_CREATEVISUAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		CoroutineAsyncOperation* DestroyVisual(::System::Boolean arg)
		{
			return ((CoroutineAsyncOperation*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_DESTROYVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_CoroutineHandler(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SET_COROUTINEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveSection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVESECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::UCDesignLevel* get_DesignLevel()
		{
			return ((::MXUnderCover::UCDesignLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_GET_DESIGNLEVEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InstantiateDesignLevel()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_CO_INSTANTIATEDESIGNLEVEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Init(::UnityEngine::MonoBehaviour* arg, ::MXUnderCover::UCSectionModel* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::MonoBehaviour*, ::MXUnderCover::UCSectionModel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_CO_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_DesignLevel(::MXUnderCover::UCDesignLevel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCDesignLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SET_DESIGNLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveSceneObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVESCENEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_LoadDesignLevel()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_CO_LOADDESIGNLEVEL_OFFSET))(nullptr);
		}

		::System::Void SyncToModel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::UnityEngine::MonoBehaviour* get_CoroutineHandler()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_GET_COROUTINEHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetActiveDesignLevel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVEDESIGNLEVEL_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCSectionModel* get_Model()
		{
			return ((::MXUnderCover::UCSectionModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_GET_MODEL_OFFSET))(nullptr);
		}

		::System::Void SetActiveScene()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SETACTIVESCENE_OFFSET))(nullptr);
		}

		::System::Void set_Model(::MXUnderCover::UCSectionModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_SET_MODEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_LoadArtLevel()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_CO_LOADARTLEVEL_OFFSET))(nullptr);
		}

		::System::Void EnableDirectionalLight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONVISUAL_ENABLEDIRECTIONALLIGHT_OFFSET))(arg, nullptr);
		}

	};
}

