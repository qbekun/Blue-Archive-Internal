#pragma once
#include "unitysdk.h"

class OnFinished;
class OnCenterCallback;
class UIScrollView;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UICENTERONCHILD_GET_CENTEREDOBJECT_OFFSET UNITYSDK_OFFSET(0x9FB760)
#define UICENTERONCHILD_START_OFFSET UNITYSDK_OFFSET(0x9FB770)
#define UICENTERONCHILD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FC4F0)
#define UICENTERONCHILD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FC580)
#define UICENTERONCHILD_ONDRAGFINISHED_OFFSET UNITYSDK_OFFSET(0x9FC610)
#define UICENTERONCHILD_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9FC640)
#define UICENTERONCHILD_RECENTER_OFFSET UNITYSDK_OFFSET(0x9FB780)
#define UICENTERONCHILD_CENTERON_OFFSET UNITYSDK_OFFSET(0x9FC9A0)
#define UICENTERONCHILD_CENTERON_OFFSET UNITYSDK_OFFSET(0x9FCC50)
#define UICENTERONCHILD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCD70)

	inline static constexpr unsigned int UICenterOnChild_TypeDefinitionIndex = 27;

	class UICenterOnChild : public Il2CppObject
	{
	public:
		::System::Single springStrength; // 0x18
		::System::Single nextPageThreshold; // 0x1C
		OnFinished* onFinished; // 0x20
		OnCenterCallback* onCenter; // 0x28
		UIScrollView* mScrollView; // 0x30
		::UnityEngine::GameObject* mCenteredObject; // 0x38

		::UnityEngine::GameObject* get_centeredObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_GET_CENTEREDOBJECT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDragFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_ONDRAGFINISHED_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void Recenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_RECENTER_OFFSET))(nullptr);
		}

		::System::Void CenterOn(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_CENTERON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CenterOn(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_CENTERON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCHILD_.CTOR_OFFSET))(nullptr);
		}

	};

