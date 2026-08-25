#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UITOOLTIPBASE`1_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_SETARROWPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_GET_SCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_CHECKRIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_CHECKLEFT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_GET_WIDTHRATIO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_CHECKABOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_COSETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_CHECKBELOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_COMPUTEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_CALCVERTICALPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_GET_HEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_GET_SCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE`1_CALCHORIZONTALPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UITooltipBase`1_TypeDefinitionIndex = 7284;

	class UITooltipBase`1 : public Il2CppObject
	{
	public:
		UIWidget* Background; // 0x0
		::UnityEngine::Transform* DownArrow; // 0x0
		::UnityEngine::Transform* RightArrow; // 0x0
		::UnityEngine::Transform* LeftArrow; // 0x0
		::UnityEngine::Transform* UpArrow; // 0x0
		Il2CppObject* tooltipInfos; // 0x0

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetArrowPosition(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_SETARROWPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Resize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_RESIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_ScreenWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_GET_SCREENWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean CheckRight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_CHECKRIGHT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetDataInternal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckLeft(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_CHECKLEFT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single get_WidthRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_GET_WIDTHRATIO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckAbove(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_CHECKABOVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoSetData(::System::Object* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_COSETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckBelow(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_CHECKBELOW_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RefreshPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_REFRESHPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void ComputePosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_COMPUTEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single CalcVerticalPositionOffset(::UnityEngine::Vector3* arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_CALCVERTICALPOSITIONOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_HeightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_GET_HEIGHTRATIO_OFFSET))(nullptr);
		}

		::System::Int32 get_ScreenHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_GET_SCREENHEIGHT_OFFSET))(nullptr);
		}

		::System::Single CalcHorizontalPositionOffset(::UnityEngine::Vector3* arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE`1_CALCHORIZONTALPOSITIONOFFSET_OFFSET))(arg, arg2, nullptr);
		}

	};

