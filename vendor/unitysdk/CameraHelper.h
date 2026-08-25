#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CAMERAHELPER_SETRAILPOINTS_OFFSET UNITYSDK_OFFSET(0xE44710)
#define CAMERAHELPER_GETMINPOSITION_OFFSET UNITYSDK_OFFSET(0xE49380)
#define CAMERAHELPER_GETMAXPOSITION_OFFSET UNITYSDK_OFFSET(0xE49730)
#define CAMERAHELPER_GET_ISLETTERBOXINBATTLE_OFFSET UNITYSDK_OFFSET(0xE471C0)
#define CAMERAHELPER_FINDCENTER_OFFSET UNITYSDK_OFFSET(0xE49AE0)

	inline static constexpr unsigned int CameraHelper_TypeDefinitionIndex = 735;

	class CameraHelper : public Il2CppObject
	{
	public:
		::System::Int32 sectionOfSetRailCommand; // 0x0

		::System::Void SetRailPoints(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAHELPER_SETRAILPOINTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector3* GetMinPosition(Il2CppObject* arg)
		{
			return ((::UnityEngine::Vector3*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAHELPER_GETMINPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetMaxPosition(Il2CppObject* arg)
		{
			return ((::UnityEngine::Vector3*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAHELPER_GETMAXPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLetterBoxInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAHELPER_GET_ISLETTERBOXINBATTLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* FindCenter(Il2CppObject* arg)
		{
			return ((::UnityEngine::Vector3*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAHELPER_FINDCENTER_OFFSET))(arg, nullptr);
		}

	};

