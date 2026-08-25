#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class DrivenTransformProperties; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA23B930)
#define UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA23B9E0)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET UNITYSDK_OFFSET(0xA23BA90)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0xA23BB20)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0xA23BBB0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0xA23BC30)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0xA23BCC0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0xA23BD40)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0xA23BDD0)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0xA23BE50)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0xA23BEE0)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA23BF60)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA23BFF0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0xA23C070)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0xA23C190)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0xA23C2B0)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0xA23C3A0)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0xA23C630)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0xA23C770)
#define UNITYENGINE_RECTTRANSFORM_GET_DRIVENBYOBJECT_OFFSET UNITYSDK_OFFSET(0xA23CA30)
#define UNITYENGINE_RECTTRANSFORM_SET_DRIVENBYOBJECT_OFFSET UNITYSDK_OFFSET(0xA23CA70)
#define UNITYENGINE_RECTTRANSFORM_GET_DRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA23CAB0)
#define UNITYENGINE_RECTTRANSFORM_SET_DRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA23CAF0)
#define UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA23CB30)
#define UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0xA23CB70)
#define UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0xA23CCF0)
#define UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET UNITYSDK_OFFSET(0xA23D030)
#define UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0xA23D3D0)
#define UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA23D7A0)
#define UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET UNITYSDK_OFFSET(0xA23D800)
#define UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET UNITYSDK_OFFSET(0xA23D5F0)
#define UNITYENGINE_RECTTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA23DC70)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BAE0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BB70)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BBF0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BC80)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BD00)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BD90)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BE10)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BEA0)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BF20)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23BFB0)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23C030)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_TypeDefinitionIndex = 31211;

	class RectTransform : public Il2CppObject
	{
	public:
		ReapplyDrivenProperties* reapplyDrivenProperties; // 0x0

		::System::Void add_reapplyDrivenProperties(ReapplyDrivenProperties* arg)
		{
			((::System::Void(*)(ReapplyDrivenProperties*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_reapplyDrivenProperties(ReapplyDrivenProperties* arg)
		{
			((::System::Void(*)(ReapplyDrivenProperties*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_rect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_anchorMin()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET))(nullptr);
		}

		::System::Void set_anchorMin(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_anchorMax()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET))(nullptr);
		}

		::System::Void set_anchorMax(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_anchoredPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_anchoredPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_sizeDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET))(nullptr);
		}

		::System::Void set_sizeDelta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_pivot()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET))(nullptr);
		}

		::System::Void set_pivot(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_anchoredPosition3D()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET))(nullptr);
		}

		::System::Void set_anchoredPosition3D(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_offsetMin()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET))(nullptr);
		}

		::System::Void set_offsetMin(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_offsetMax()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET))(nullptr);
		}

		::System::Void set_offsetMax(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_drivenByObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_DRIVENBYOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_drivenByObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_DRIVENBYOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::DrivenTransformProperties* get_drivenProperties()
		{
			return (return (::UnityEngine::DrivenTransformProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_DRIVENPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_drivenProperties(::UnityEngine::DrivenTransformProperties* arg)
		{
			((::System::Void(*)(::UnityEngine::DrivenTransformProperties*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_DRIVENPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void ForceUpdateRectTransforms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET))(nullptr);
		}

		::System::Void GetLocalCorners(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET))(arg, nullptr);
		}

		::System::Void GetWorldCorners(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetInsetAndSizeFromParentEdge(Edge* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(Edge*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetSizeWithCurrentAnchors(Axis* arg, ::System::Single arg)
		{
			((::System::Void(*)(Axis*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendReapplyDrivenProperties(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* GetRectInParentSpace()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetParentSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_anchorMin_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_anchorMin_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_anchorMax_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_anchorMax_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_anchoredPosition_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_anchoredPosition_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_sizeDelta_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_sizeDelta_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

