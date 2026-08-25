#pragma once
#include "../unitysdk.h"

#define MXPATH_DISTANCEMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9435F70)

namespace MXPath
{
	inline static constexpr unsigned int DistanceMetadata_TypeDefinitionIndex = 37992;

	class DistanceMetadata : public Il2CppObject
	{
	public:
		::System::Int32 edgeId; // 0x10
		::Il2CppArray<::System::Object*>* datas; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_DISTANCEMETADATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

