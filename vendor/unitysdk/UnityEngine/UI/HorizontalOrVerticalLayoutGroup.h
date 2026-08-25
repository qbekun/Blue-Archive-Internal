#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0xA468300)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0xA468310)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0xA468360)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA468370)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA468380)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0xA4683D0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA468420)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0xA468470)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_REVERSEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0xA468480)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET UNITYSDK_OFFSET(0xA467440)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_REVERSEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0xA4685E0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET UNITYSDK_OFFSET(0xA467980)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0xA468D50)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0xA468DA0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0xA468DB0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0xA468E00)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET UNITYSDK_OFFSET(0xA4684D0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA468E20)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0xA468E30)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4682E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex = 34808;

	class HorizontalOrVerticalLayoutGroup : public Il2CppObject
	{
	public:
		::System::Single m_Spacing; // 0x58
		::System::Boolean m_ChildForceExpandWidth; // 0x5C
		::System::Boolean m_ChildForceExpandHeight; // 0x5D
		::System::Boolean m_ChildControlWidth; // 0x5E
		::System::Boolean m_ChildControlHeight; // 0x5F
		::System::Boolean m_ChildScaleWidth; // 0x60
		::System::Boolean m_ChildScaleHeight; // 0x61
		::System::Boolean m_ReverseArrangement; // 0x62

		::System::Boolean get_childControlHeight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_childControlWidth(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_childControlWidth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean get_childScaleHeight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_childForceExpandHeight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_childForceExpandWidth(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_childScaleHeight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_childForceExpandWidth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_reverseArrangement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_REVERSEARRANGEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void CalcAlongAxis(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_reverseArrangement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_REVERSEARRANGEMENT_OFFSET))(nullptr);
		}

		::System::Void SetChildrenAlongAxis(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_childScaleWidth(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_spacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET))(nullptr);
		}

		::System::Void set_spacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_childScaleWidth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET))(nullptr);
		}

		::System::Void GetChildSizes(::UnityEngine::RectTransform* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean, float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_childForceExpandHeight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_childControlHeight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

