#pragma once
#include "../unitysdk.h"

#define SPINE_POLYGON_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x95C4440)
#define SPINE_POLYGON_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x95C4450)
#define SPINE_POLYGON_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x95C4460)
#define SPINE_POLYGON_.CTOR_OFFSET UNITYSDK_OFFSET(0x95C3A90)
#define SPINE_POLYGON_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x95C4470)

namespace Spine
{
	inline static constexpr unsigned int Polygon_TypeDefinitionIndex = 35060;

	class Polygon : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Vertices_k__BackingField; // 0x10
		::System::Int32 _Count_k__BackingField; // 0x18

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Vertices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_GET_VERTICES_OFFSET))(nullptr);
		}

		::System::Void set_Vertices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_SET_VERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

