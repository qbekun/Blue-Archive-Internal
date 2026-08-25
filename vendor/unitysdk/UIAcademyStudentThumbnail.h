#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UITexture;

#define UIACADEMYSTUDENTTHUMBNAIL_GET_NOTOWNED_OFFSET UNITYSDK_OFFSET(0x21E36E0)
#define UIACADEMYSTUDENTTHUMBNAIL_GET_DIM_OFFSET UNITYSDK_OFFSET(0x21E37E0)
#define UIACADEMYSTUDENTTHUMBNAIL_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x21E38E0)
#define UIACADEMYSTUDENTTHUMBNAIL_SETBONUS_OFFSET UNITYSDK_OFFSET(0x21E25F0)
#define UIACADEMYSTUDENTTHUMBNAIL_GET_OWNED_OFFSET UNITYSDK_OFFSET(0x21E3980)
#define UIACADEMYSTUDENTTHUMBNAIL_GET_ICONFAVOR_OFFSET UNITYSDK_OFFSET(0x21E3A80)
#define UIACADEMYSTUDENTTHUMBNAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E3B80)
#define UIACADEMYSTUDENTTHUMBNAIL_SETTHUMBNAIL_OFFSET UNITYSDK_OFFSET(0x21DF5E0)
#define UIACADEMYSTUDENTTHUMBNAIL_GET_ICONCHECK_OFFSET UNITYSDK_OFFSET(0x21E3B90)

	inline static constexpr unsigned int UIAcademyStudentThumbnail_TypeDefinitionIndex = 4231;

	class UIAcademyStudentThumbnail : public Il2CppObject
	{
	public:
		UILabel* favorLabel; // 0x18
		::UnityEngine::GameObject* lineHider; // 0x20
		::UnityEngine::GameObject* bonus; // 0x28
		UITexture* _texture; // 0x30
		::UnityEngine::GameObject* _owned; // 0x38
		::UnityEngine::GameObject* _notOwned; // 0x40
		::UnityEngine::GameObject* _iconFavor; // 0x48
		::UnityEngine::GameObject* _iconCheck; // 0x50
		::UnityEngine::GameObject* _dim; // 0x58

		::UnityEngine::GameObject* get_NotOwned()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_GET_NOTOWNED_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Dim()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_GET_DIM_OFFSET))(nullptr);
		}

		UITexture* get_Texture()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void SetBonus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_SETBONUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_Owned()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_GET_OWNED_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_IconFavor()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_GET_ICONFAVOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetThumbnail(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_SETTHUMBNAIL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::GameObject* get_IconCheck()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSTUDENTTHUMBNAIL_GET_ICONCHECK_OFFSET))(nullptr);
		}

	};

