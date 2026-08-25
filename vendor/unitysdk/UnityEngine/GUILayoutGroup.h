#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GUILayoutEntry; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA2861D0)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA2861E0)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0xA2861F0)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA286200)
#define UNITYENGINE_GUILAYOUTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27D9C0)
#define UNITYENGINE_GUILAYOUTGROUP_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0xA286210)
#define UNITYENGINE_GUILAYOUTGROUP_APPLYSTYLESETTINGS_OFFSET UNITYSDK_OFFSET(0xA286300)
#define UNITYENGINE_GUILAYOUTGROUP_RESETCURSOR_OFFSET UNITYSDK_OFFSET(0xA27E720)
#define UNITYENGINE_GUILAYOUTGROUP_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0xA286380)
#define UNITYENGINE_GUILAYOUTGROUP_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA286C70)
#define UNITYENGINE_GUILAYOUTGROUP_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0xA287B60)
#define UNITYENGINE_GUILAYOUTGROUP_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0xA288330)
#define UNITYENGINE_GUILAYOUTGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA289240)
#define UNITYENGINE_GUILAYOUTGROUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2896C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutGroup_TypeDefinitionIndex = 36553;

	class GUILayoutGroup : public Il2CppObject
	{
	public:
		Il2CppObject* entries; // 0x48
		::System::Boolean isVertical; // 0x50
		::System::Boolean resetCoords; // 0x51
		::System::Single spacing; // 0x54
		::System::Boolean sameSize; // 0x58
		::System::Boolean isWindow; // 0x59
		::System::Int32 windowID; // 0x5C
		::System::Int32 m_Cursor; // 0x60
		::System::Int32 m_StretchableCountX; // 0x64
		::System::Int32 m_StretchableCountY; // 0x68
		::System::Boolean m_UserSpecifiedWidth; // 0x6C
		::System::Boolean m_UserSpecifiedHeight; // 0x6D
		::System::Single m_ChildMinWidth; // 0x70
		::System::Single m_ChildMaxWidth; // 0x74
		::System::Single m_ChildMinHeight; // 0x78
		::System::Single m_ChildMaxHeight; // 0x7C
		::System::Int32 m_MarginLeft; // 0x80
		::System::Int32 m_MarginRight; // 0x84
		::System::Int32 m_MarginTop; // 0x88
		::System::Int32 m_MarginBottom; // 0x8C
		::UnityEngine::GUILayoutEntry* none; // 0x0

		::System::Int32 get_marginLeft()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINLEFT_OFFSET))(nullptr);
		}

		::System::Int32 get_marginRight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINRIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_marginTop()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINTOP_OFFSET))(nullptr);
		}

		::System::Int32 get_marginBottom()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINBOTTOM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyOptions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_APPLYOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyleSettings(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_APPLYSTYLESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_RESETCURSOR_OFFSET))(nullptr);
		}

		::System::Void CalcWidth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_CALCWIDTH_OFFSET))(nullptr);
		}

		::System::Void SetHorizontal(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_SETHORIZONTAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalcHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_CALCHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetVertical(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_SETVERTICAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

