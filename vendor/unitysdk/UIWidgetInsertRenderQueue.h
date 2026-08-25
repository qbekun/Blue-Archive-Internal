#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Renderer; }

#define UIWIDGETINSERTRENDERQUEUE_GET_INVISIBLESHADER_OFFSET UNITYSDK_OFFSET(0x206D310)
#define UIWIDGETINSERTRENDERQUEUE_GET_INVISIBLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x207E910)
#define UIWIDGETINSERTRENDERQUEUE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x207EA00)
#define UIWIDGETINSERTRENDERQUEUE_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x207EA10)
#define UIWIDGETINSERTRENDERQUEUE_AWAKE_OFFSET UNITYSDK_OFFSET(0x207EA20)
#define UIWIDGETINSERTRENDERQUEUE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x207EA60)
#define UIWIDGETINSERTRENDERQUEUE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x207EAC0)
#define UIWIDGETINSERTRENDERQUEUE_REFRESHSYNCEDRENDERQUEUES_OFFSET UNITYSDK_OFFSET(0x207EC10)
#define UIWIDGETINSERTRENDERQUEUE_APPLYRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x207ECA0)
#define UIWIDGETINSERTRENDERQUEUE_REFRESHRENDERQUEUESYNC_OFFSET UNITYSDK_OFFSET(0x207EDD0)
#define UIWIDGETINSERTRENDERQUEUE_ADDTOSYNCEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x207EDE0)
#define UIWIDGETINSERTRENDERQUEUE_ADDTOSYNCEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x207EEE0)
#define UIWIDGETINSERTRENDERQUEUE_REMOVEFROMSYNCEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x207F310)
#define UIWIDGETINSERTRENDERQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x207F3A0)

	inline static constexpr unsigned int UIWidgetInsertRenderQueue_TypeDefinitionIndex = 156;

	class UIWidgetInsertRenderQueue : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* invShader; // 0x0
		::UnityEngine::Material* invMaterial; // 0x8
		Il2CppObject* syncRenderers; // 0x190
		::System::Int32 prevSyncedRQ; // 0x198
		::System::Boolean forceRQSync; // 0x19C

		::UnityEngine::Shader* get_InvisibleShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_GET_INVISIBLESHADER_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_InvisibleMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_GET_INVISIBLEMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void RefreshSyncedRenderQueues(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_REFRESHSYNCEDRENDERQUEUES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyRenderQueue(::UnityEngine::Renderer* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_APPLYRENDERQUEUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshRenderQueueSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_REFRESHRENDERQUEUESYNC_OFFSET))(nullptr);
		}

		::System::Void AddToSyncedRenderers(::UnityEngine::Renderer* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_ADDTOSYNCEDRENDERERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddToSyncedRenderers(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_ADDTOSYNCEDRENDERERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveFromSyncedRenderers(::UnityEngine::Renderer* arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_REMOVEFROMSYNCEDRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETINSERTRENDERQUEUE_.CTOR_OFFSET))(nullptr);
		}

	};

