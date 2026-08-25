#pragma once
#include "unitysdk.h"

class RailPointProperties;
namespace UnityEngine { class Vector3; }
class CameraInfo;
class RailPointInfo;

#define CAMERAINFO_GET_RAILPOINTPROPS_OFFSET UNITYSDK_OFFSET(0xE4A000)
#define CAMERAINFO_SET_NEXTINFO_OFFSET UNITYSDK_OFFSET(0xE4A010)
#define CAMERAINFO_CALCULATENORMAL_OFFSET UNITYSDK_OFFSET(0xE48F10)
#define CAMERAINFO_GET_PREVINFO_OFFSET UNITYSDK_OFFSET(0xE4A020)
#define CAMERAINFO_GET_MAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xE45590)
#define CAMERAINFO_GET_NEXTINFO_OFFSET UNITYSDK_OFFSET(0xE4A030)
#define CAMERAINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xE455E0)
#define CAMERAINFO_SET_RAILPOINTPROPS_OFFSET UNITYSDK_OFFSET(0xE4A040)
#define CAMERAINFO_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xE4A050)
#define CAMERAINFO_SET_PREVINFO_OFFSET UNITYSDK_OFFSET(0xE4A070)
#define CAMERAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE48E60)
#define CAMERAINFO_GET_MINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xE45570)
#define CAMERAINFO_GET_CAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xE455B0)
#define CAMERAINFO_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0xE4A080)

	inline static constexpr unsigned int CameraInfo_TypeDefinitionIndex = 738;

	class CameraInfo : public Il2CppObject
	{
	public:
		RailPointProperties* _RailPointProps_k__BackingField; // 0x10
		::UnityEngine::Vector3* _Normal_k__BackingField; // 0x18
		CameraInfo* _prevInfo_k__BackingField; // 0x28
		CameraInfo* _nextInfo_k__BackingField; // 0x30

		RailPointProperties* get_RailPointProps()
		{
			return ((RailPointProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_RAILPOINTPROPS_OFFSET))(nullptr);
		}

		::System::Void set_nextInfo(CameraInfo* arg)
		{
			((::System::Void(*)(CameraInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_SET_NEXTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateNormal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_CALCULATENORMAL_OFFSET))(nullptr);
		}

		CameraInfo* get_prevInfo()
		{
			return ((CameraInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_PREVINFO_OFFSET))(nullptr);
		}

		::System::Single get_MaxCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_MAXCAMERADISTANCE_OFFSET))(nullptr);
		}

		CameraInfo* get_nextInfo()
		{
			return ((CameraInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_NEXTINFO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Position()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_RailPointProps(RailPointProperties* arg)
		{
			((::System::Void(*)(RailPointProperties*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_SET_RAILPOINTPROPS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Normal()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_NORMAL_OFFSET))(nullptr);
		}

		::System::Void set_prevInfo(CameraInfo* arg)
		{
			((::System::Void(*)(CameraInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_SET_PREVINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(RailPointInfo* arg)
		{
			((::System::Void(*)(RailPointInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_MINCAMERADISTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_CameraForward()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_GET_CAMERAFORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Normal(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAINFO_SET_NORMAL_OFFSET))(arg, nullptr);
		}

	};

