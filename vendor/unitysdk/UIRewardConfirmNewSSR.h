#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
namespace UnityEngine { class Animation; }
class TSSVisual;

#define UIREWARDCONFIRMNEWSSR_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B3E90)
#define UIREWARDCONFIRMNEWSSR_GET_SYMBOLANIMATION_OFFSET UNITYSDK_OFFSET(0x27B3EA0)
#define UIREWARDCONFIRMNEWSSR_TSSDESTROYALLCHILD_OFFSET UNITYSDK_OFFSET(0x27B1910)
#define UIREWARDCONFIRMNEWSSR_GET_SYMBOLPARENT_OFFSET UNITYSDK_OFFSET(0x27B3EB0)
#define UIREWARDCONFIRMNEWSSR_GET_TSSPARENT_OFFSET UNITYSDK_OFFSET(0x27B3EC0)
#define UIREWARDCONFIRMNEWSSR_SETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x27B1640)
#define UIREWARDCONFIRMNEWSSR_SETTSS_OFFSET UNITYSDK_OFFSET(0x27B1D30)
#define UIREWARDCONFIRMNEWSSR_SET_TSSVISUAL_OFFSET UNITYSDK_OFFSET(0x27B3EF0)
#define UIREWARDCONFIRMNEWSSR_GET_TSSVISUAL_OFFSET UNITYSDK_OFFSET(0x27B3F00)

	inline static constexpr unsigned int UIRewardConfirmNewSSR_TypeDefinitionIndex = 7526;

	class UIRewardConfirmNewSSR : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* symbolParent; // 0x18
		UILabel* symbolLabel; // 0x20
		UITexture* symbolSchoolIcon; // 0x28
		UITexture* symbolBgTexture; // 0x30
		::UnityEngine::Animation* symbolAnimation; // 0x38
		::UnityEngine::GameObject* tssParent; // 0x40
		TSSVisual* _TssVisual_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_SymbolAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_GET_SYMBOLANIMATION_OFFSET))(nullptr);
		}

		::System::Void TssDestroyAllChild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_TSSDESTROYALLCHILD_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_SymbolParent()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_GET_SYMBOLPARENT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_TssParent()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_GET_TSSPARENT_OFFSET))(nullptr);
		}

		::System::Void SetCharacterData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_SETCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SetTss(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_SETTSS_OFFSET))(arg, nullptr);
		}

		::System::Void set_TssVisual(TSSVisual* arg)
		{
			((::System::Void(*)(TSSVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_SET_TSSVISUAL_OFFSET))(arg, nullptr);
		}

		TSSVisual* get_TssVisual()
		{
			return ((TSSVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMNEWSSR_GET_TSSVISUAL_OFFSET))(nullptr);
		}

	};

