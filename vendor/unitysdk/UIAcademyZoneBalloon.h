#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UITexture;
class MXButton;
namespace UnityEngine { class Transform; }
class UITweener;

#define UIACADEMYZONEBALLOON_GET_FAVOR_OFFSET UNITYSDK_OFFSET(0x21E4A50)
#define UIACADEMYZONEBALLOON_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E4B50)
#define UIACADEMYZONEBALLOON_GET_ICONCLEAR_OFFSET UNITYSDK_OFFSET(0x21E4B60)
#define UIACADEMYZONEBALLOON_GET_TWEENER_OFFSET UNITYSDK_OFFSET(0x21E4C10)
#define UIACADEMYZONEBALLOON_GET_NOTOWNED_OFFSET UNITYSDK_OFFSET(0x21E4CB0)
#define UIACADEMYZONEBALLOON_GET_ACTIVESELF_OFFSET UNITYSDK_OFFSET(0x21E4DB0)
#define UIACADEMYZONEBALLOON_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E4DE0)
#define UIACADEMYZONEBALLOON_GET_ISCHARACTER_OFFSET UNITYSDK_OFFSET(0x21E4DF0)
#define UIACADEMYZONEBALLOON_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x21E4E00)
#define UIACADEMYZONEBALLOON_GET_NOSTUDENT_OFFSET UNITYSDK_OFFSET(0x21E4E10)
#define UIACADEMYZONEBALLOON_GET_LOCK_OFFSET UNITYSDK_OFFSET(0x21E4F10)
#define UIACADEMYZONEBALLOON_GET_DIM_OFFSET UNITYSDK_OFFSET(0x21E4FD0)
#define UIACADEMYZONEBALLOON_SETUI_OFFSET UNITYSDK_OFFSET(0x21E5090)
#define UIACADEMYZONEBALLOON_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x21E63D0)
#define UIACADEMYZONEBALLOON_GET_STUDENT_OFFSET UNITYSDK_OFFSET(0x21E5EB0)
#define UIACADEMYZONEBALLOON_GET_OWNED_OFFSET UNITYSDK_OFFSET(0x21E6050)
#define UIACADEMYZONEBALLOON_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x21E6450)
#define UIACADEMYZONEBALLOON_ONCLICKBALLOON_OFFSET UNITYSDK_OFFSET(0x21E6470)
#define UIACADEMYZONEBALLOON_SET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E6530)
#define UIACADEMYZONEBALLOON_GET_ICONFAVOR_OFFSET UNITYSDK_OFFSET(0x21E6150)
#define UIACADEMYZONEBALLOON_SETICON_OFFSET UNITYSDK_OFFSET(0x21E6540)
#define UIACADEMYZONEBALLOON_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x21E6340)
#define UIACADEMYZONEBALLOON_GET_ICONNORMAL_OFFSET UNITYSDK_OFFSET(0x21E6290)
#define UIACADEMYZONEBALLOON_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x21E6560)
#define UIACADEMYZONEBALLOON_GET_THUMBNAIL_OFFSET UNITYSDK_OFFSET(0x21E5FB0)

	inline static constexpr unsigned int UIAcademyZoneBalloon_TypeDefinitionIndex = 4235;

	class UIAcademyZoneBalloon : public Il2CppObject
	{
	public:
		UILabel* favorLabel; // 0x18
		::UnityEngine::GameObject* favorDim; // 0x20
		UITexture* _thumbnail; // 0x28
		::UnityEngine::GameObject* _noStudent; // 0x30
		::UnityEngine::GameObject* _student; // 0x38
		::UnityEngine::GameObject* _favor; // 0x40
		::UnityEngine::GameObject* _owned; // 0x48
		::UnityEngine::GameObject* _notOwned; // 0x50
		MXButton* _button; // 0x58
		::UnityEngine::Transform* _myTransform; // 0x60
		Il2CppObject* _iconFavor; // 0x68
		::UnityEngine::GameObject* _iconClear; // 0x70
		::UnityEngine::GameObject* _iconNormal; // 0x78
		::UnityEngine::GameObject* _dim; // 0x80
		::UnityEngine::GameObject* _lock; // 0x88
		UITweener* _tweener; // 0x90
		::System::Int64 _ZoneId_k__BackingField; // 0x98
		::System::Int64 _CharacterId_k__BackingField; // 0xA0

		::UnityEngine::GameObject* get_Favor()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_FAVOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_IconClear()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_ICONCLEAR_OFFSET))(nullptr);
		}

		UITweener* get_Tweener()
		{
			return ((UITweener*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_TWEENER_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_NotOwned()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_NOTOWNED_OFFSET))(nullptr);
		}

		::System::Boolean get_ActiveSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_ACTIVESELF_OFFSET))(nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_ISCHARACTER_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_NoStudent()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_NOSTUDENT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Lock()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_LOCK_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Dim()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_DIM_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_SETUI_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Student()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_STUDENT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Owned()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_OWNED_OFFSET))(nullptr);
		}

		::System::Void SetCharacter(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_SETCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickBalloon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_ONCLICKBALLOON_OFFSET))(nullptr);
		}

		::System::Void set_ZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_SET_ZONEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IconFavor()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_ICONFAVOR_OFFSET))(nullptr);
		}

		::System::Void SetIcon(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_SETICON_OFFSET))(arg, nullptr);
		}

		MXButton* get_Button()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_BUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_IconNormal()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_ICONNORMAL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		UITexture* get_Thumbnail()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONEBALLOON_GET_THUMBNAIL_OFFSET))(nullptr);
		}

	};

