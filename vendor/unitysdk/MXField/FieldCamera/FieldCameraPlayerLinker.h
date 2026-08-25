#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchType; }
namespace UnityEngine { class Transform; }

#define MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_HANDLESCENECHANGED_OFFSET UNITYSDK_OFFSET(0xEE5A80)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE5B70)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEE5C30)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE5E40)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEE5E50)

namespace MXField::FieldCamera
{
	inline static constexpr unsigned int FieldCameraPlayerLinker_TypeDefinitionIndex = 11016;

	class FieldCameraPlayerLinker : public Il2CppObject
	{
	public:
		::System::Boolean HandleSceneChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_HANDLESCENECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAPLAYERLINKER_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

