#pragma once
#include "../unitysdk.h"

#define MXPATH_PATH`2_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_PATH`2_GET_ISFLATTENGROUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_PATH`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXPath
{
	inline static constexpr unsigned int Path`2_TypeDefinitionIndex = 38001;

	class Path`2 : public Il2CppObject
	{
	public:
		Il2CppObject* graph; // 0x0

		Il2CppObject* GetGraph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_PATH`2_GETGRAPH_OFFSET))(nullptr);
		}

		::System::Boolean get_isFlattenGround()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_PATH`2_GET_ISFLATTENGROUND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_PATH`2_.CTOR_OFFSET))(nullptr);
		}

	};
}

