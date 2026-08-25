#pragma once
#include "../unitysdk.h"

#define SPINE_CURVETIMELINE_SETSTEPPED_OFFSET UNITYSDK_OFFSET(0x95919F0)
#define SPINE_CURVETIMELINE_GETBEZIERVALUE_OFFSET UNITYSDK_OFFSET(0x9591A20)
#define SPINE_CURVETIMELINE_SHRINK_OFFSET UNITYSDK_OFFSET(0x9591BF0)
#define SPINE_CURVETIMELINE_GETCURVETYPE_OFFSET UNITYSDK_OFFSET(0x9591CA0)
#define SPINE_CURVETIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x9591CE0)
#define SPINE_CURVETIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9591EA0)
#define SPINE_CURVETIMELINE_SETLINEAR_OFFSET UNITYSDK_OFFSET(0x9591F30)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline_TypeDefinitionIndex = 34955;

	class CurveTimeline : public Il2CppObject
	{
	public:
		::System::Int32 LINEAR; // 0x0
		::System::Int32 STEPPED; // 0x0
		::System::Int32 BEZIER; // 0x0
		::System::Int32 BEZIER_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* curves; // 0x20

		::System::Void SetStepped(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETSTEPPED_OFFSET))(arg, nullptr);
		}

		::System::Single GetBezierValue(::System::Single arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_GETBEZIERVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Shrink(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SHRINK_OFFSET))(arg, nullptr);
		}

		::System::Single GetCurveType(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_GETCURVETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBezier(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETBEZIER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLinear(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE_SETLINEAR_OFFSET))(arg, nullptr);
		}

	};
}

