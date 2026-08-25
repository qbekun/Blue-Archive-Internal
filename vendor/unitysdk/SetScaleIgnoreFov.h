#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }

#define SETSCALEIGNOREFOV_.CTOR_OFFSET UNITYSDK_OFFSET(0x205DEC0)
#define SETSCALEIGNOREFOV_AWAKE_OFFSET UNITYSDK_OFFSET(0x205DED0)
#define SETSCALEIGNOREFOV_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x205E040)

	inline static constexpr unsigned int SetScaleIgnoreFov_TypeDefinitionIndex = 3375;

	class SetScaleIgnoreFov : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* Camera; // 0x18
		::System::Single oriFov; // 0x20
		::UnityEngine::Vector3* oriScale; // 0x24
		::Il2CppArray<::System::Object*>* drag; // 0x30
		::Il2CppArray<::System::Object*>* oriXDrag; // 0x38
		::Il2CppArray<::System::Object*>* oriYDrag; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETSCALEIGNOREFOV_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETSCALEIGNOREFOV_AWAKE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETSCALEIGNOREFOV_LATEUPDATE_OFFSET))(nullptr);
		}

	};

