#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0xA465C80)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xA465C90)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA465CE0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0xA465EF0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA465F00)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA466570)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0xA466840)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0xA466890)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA4668A0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xA4668F0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0xA466900)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0xA466910)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETCELLSALONGAXIS_OFFSET UNITYSDK_OFFSET(0xA466960)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA467350)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0xA467360)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA4673B0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0xA4673C0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA467410)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GridLayoutGroup_TypeDefinitionIndex = 34806;

	class GridLayoutGroup : public Il2CppObject
	{
	public:
		Corner* m_StartCorner; // 0x58
		Axis* m_StartAxis; // 0x5C
		::UnityEngine::Vector2* m_CellSize; // 0x60
		::UnityEngine::Vector2* m_Spacing; // 0x68
		Constraint* m_Constraint; // 0x70
		::System::Int32 m_ConstraintCount; // 0x74

		Constraint* get_constraint()
		{
			return (return (Constraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void set_cellSize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CELLSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_spacing()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_SPACING_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Void set_constraint(Constraint* arg)
		{
			((::System::Void(*)(Constraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINT_OFFSET))(arg, nullptr);
		}

		Axis* get_startAxis()
		{
			return (return (Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTAXIS_OFFSET))(nullptr);
		}

		::System::Void set_constraintCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_cellSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CELLSIZE_OFFSET))(nullptr);
		}

		Corner* get_startCorner()
		{
			return (return (Corner*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTCORNER_OFFSET))(nullptr);
		}

		::System::Void set_startAxis(Axis* arg)
		{
			((::System::Void(*)(Axis*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTAXIS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCellsAlongAxis(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETCELLSALONGAXIS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_constraintCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_spacing(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_SPACING_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayoutHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void set_startCorner(Corner* arg)
		{
			((::System::Void(*)(Corner*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTCORNER_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayoutVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(nullptr);
		}

	};
}

