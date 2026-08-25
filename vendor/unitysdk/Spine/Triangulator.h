#pragma once
#include "../unitysdk.h"

#define SPINE_TRIANGULATOR_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x95E1EF0)
#define SPINE_TRIANGULATOR_ISCONCAVE_OFFSET UNITYSDK_OFFSET(0x95E26F0)
#define SPINE_TRIANGULATOR_WINDING_OFFSET UNITYSDK_OFFSET(0x95E2840)
#define SPINE_TRIANGULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E2880)
#define SPINE_TRIANGULATOR_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x95E2AE0)
#define SPINE_TRIANGULATOR_POSITIVEAREA_OFFSET UNITYSDK_OFFSET(0x95E2800)

namespace Spine
{
	inline static constexpr unsigned int Triangulator_TypeDefinitionIndex = 35075;

	class Triangulator : public Il2CppObject
	{
	public:
		Il2CppObject* convexPolygons; // 0x10
		Il2CppObject* convexPolygonsIndices; // 0x18
		Il2CppObject* indicesArray; // 0x20
		Il2CppObject* isConcaveArray; // 0x28
		Il2CppObject* triangles; // 0x30
		Il2CppObject* polygonPool; // 0x38
		Il2CppObject* polygonIndicesPool; // 0x40

		Il2CppObject* Triangulate(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_TRIANGULATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConcave(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_ISCONCAVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Winding(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_WINDING_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Decompose(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_DECOMPOSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean PositiveArea(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRIANGULATOR_POSITIVEAREA_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

