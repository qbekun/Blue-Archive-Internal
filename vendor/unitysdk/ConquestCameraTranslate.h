#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Data::Excel { class ConquestCameraSettingExcel; }
class ConquestTileMapVisual;
namespace UnityEngine { class Vector2; }

#define CONQUESTCAMERATRANSLATE_GETDEST_OFFSET UNITYSDK_OFFSET(0x1AD4370)
#define CONQUESTCAMERATRANSLATE_COPLAYCAMERATRANSLATE_OFFSET UNITYSDK_OFFSET(0x1AD4410)
#define CONQUESTCAMERATRANSLATE_UPDATEFOLLOW_OFFSET UNITYSDK_OFFSET(0x1AD44C0)
#define CONQUESTCAMERATRANSLATE_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0x1AD4810)
#define CONQUESTCAMERATRANSLATE_GETSTEPCENTER_OFFSET UNITYSDK_OFFSET(0x1AD4D50)
#define CONQUESTCAMERATRANSLATE_GET_UINAMES_OFFSET UNITYSDK_OFFSET(0x1AD5040)
#define CONQUESTCAMERATRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5120)
#define CONQUESTCAMERATRANSLATE_SETPOS_OFFSET UNITYSDK_OFFSET(0x1AD4B90)
#define CONQUESTCAMERATRANSLATE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AD5130)
#define CONQUESTCAMERATRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1AD5240)
#define CONQUESTCAMERATRANSLATE_GET_CENTERPOS_OFFSET UNITYSDK_OFFSET(0x1AD5610)
#define CONQUESTCAMERATRANSLATE__TRANSLATE_G__VIEWTOWORLD|8_0_OFFSET UNITYSDK_OFFSET(0x1AD54C0)
#define CONQUESTCAMERATRANSLATE_SET_CENTERPOS_OFFSET UNITYSDK_OFFSET(0x1AD5630)

	inline static constexpr unsigned int ConquestCameraTranslate_TypeDefinitionIndex = 1432;

	class ConquestCameraTranslate : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _CenterPos_k__BackingField; // 0xA8

		::UnityEngine::Vector3* GetDest(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_GETDEST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayCameraTranslate(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_COPLAYCAMERATRANSLATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateFollow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_UPDATEFOLLOW_OFFSET))(nullptr);
		}

		::System::Void InitCameraLimit(::MX::Data::Excel::ConquestCameraSettingExcel* arg, ConquestTileMapVisual* arg2, ::System::Boolean arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestCameraSettingExcel*, ConquestTileMapVisual*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_INITCAMERALIMIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector3* GetStepCenter(::MX::Data::Excel::ConquestCameraSettingExcel* arg, ConquestTileMapVisual* arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Data::Excel::ConquestCameraSettingExcel*, ConquestTileMapVisual*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_GETSTEPCENTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_UINames()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_GET_UINAMES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetPos(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_SETPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Translate(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_CenterPos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_GET_CENTERPOS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* _Translate_g__ViewToWorld|8_0(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE__TRANSLATE_G__VIEWTOWORLD|8_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CenterPos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCAMERATRANSLATE_SET_CENTERPOS_OFFSET))(arg, nullptr);
		}

	};

