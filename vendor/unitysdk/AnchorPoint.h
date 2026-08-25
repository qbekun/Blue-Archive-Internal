#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIRect;
namespace UnityEngine { class Camera; }

#define ANCHORPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2075960)
#define ANCHORPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2075970)
#define ANCHORPOINT_SET_OFFSET UNITYSDK_OFFSET(0x2075A10)
#define ANCHORPOINT_SET_OFFSET UNITYSDK_OFFSET(0x2075A80)
#define ANCHORPOINT_SETTONEAREST_OFFSET UNITYSDK_OFFSET(0x2075B10)
#define ANCHORPOINT_SETTONEAREST_OFFSET UNITYSDK_OFFSET(0x2075B50)
#define ANCHORPOINT_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x2075CA0)
#define ANCHORPOINT_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0x2075E90)
#define ANCHORPOINT_GETSIDES_OFFSET UNITYSDK_OFFSET(0x2076090)

	inline static constexpr unsigned int AnchorPoint_TypeDefinitionIndex = 143;

	class AnchorPoint : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::System::Single relative; // 0x18
		::System::Int32 absolute; // 0x1C
		UIRect* rect; // 0x20
		::UnityEngine::Camera* targetCam; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Set(::UnityEngine::Transform* arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_SET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetToNearest(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_SETTONEAREST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetToNearest(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_SETTONEAREST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetHorizontal(::UnityEngine::Transform* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_SETHORIZONTAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetVertical(::UnityEngine::Transform* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_SETVERTICAL_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Transform* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ANCHORPOINT_GETSIDES_OFFSET))(arg, nullptr);
		}

	};

