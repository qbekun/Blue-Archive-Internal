#pragma once
#include "unitysdk.h"

class CharacterObject;
namespace UnityEngine { class Animation; }

#define UIACADEMYMESSANGERFAVORRANKSTATLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x21A0940)
#define UIACADEMYMESSANGERFAVORRANKSTATLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21A0EB0)
#define UIACADEMYMESSANGERFAVORRANKSTATLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A11F0)
#define UIACADEMYMESSANGERFAVORRANKSTATLIST_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21A1230)
#define UIACADEMYMESSANGERFAVORRANKSTATLIST_INITBUTTONS_OFFSET UNITYSDK_OFFSET(0x21A0F90)
#define UIACADEMYMESSANGERFAVORRANKSTATLIST_PLAYANIAMTION_OFFSET UNITYSDK_OFFSET(0x21A1170)

	inline static constexpr unsigned int UIAcademyMessangerFavorRankStatList_TypeDefinitionIndex = 4150;

	class UIAcademyMessangerFavorRankStatList : public ::System::Xml::NameTable
	{
	public:
		CharacterObject* SelectedCharacter; // 0x90
		::UnityEngine::Animation* anim; // 0x98
		::Il2CppArray<::System::Object*>* closeButtons; // 0xA0

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATLIST_SETDATA_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATLIST_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void InitButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATLIST_INITBUTTONS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayAniamtion(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATLIST_PLAYANIAMTION_OFFSET))(arg, nullptr);
		}

	};

