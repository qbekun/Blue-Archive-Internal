#pragma once
#include "unitysdk.h"

namespace NPA { class UINavigationFeatureActivationStatusType; }

#define UIOPTIONS_GET_UINAVIGATIONFEATUREACTIVATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x9BBDD90)
#define UIOPTIONS_SET_UINAVIGATIONFEATUREACTIVATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x9BBDDA0)
#define UIOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBDCE0)

	inline static constexpr unsigned int UIOptions_TypeDefinitionIndex = 25543;

	class UIOptions : public Il2CppObject
	{
	public:
		::NPA::UINavigationFeatureActivationStatusType* _UINavigationFeatureActivationStatus_k__BackingField; // 0x10

		::NPA::UINavigationFeatureActivationStatusType* get_UINavigationFeatureActivationStatus()
		{
			return (return (::NPA::UINavigationFeatureActivationStatusType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPTIONS_GET_UINAVIGATIONFEATUREACTIVATIONSTATUS_OFFSET))(nullptr);
		}

		::System::Void set_UINavigationFeatureActivationStatus(::NPA::UINavigationFeatureActivationStatusType* arg)
		{
			((::System::Void(*)(::NPA::UINavigationFeatureActivationStatusType*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPTIONS_SET_UINAVIGATIONFEATUREACTIVATIONSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPTIONS_.CTOR_OFFSET))(nullptr);
		}

	};

