#pragma once
#include "unitysdk.h"

#define POLYTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x286CED0)
#define POLYTREE_GETFIRST_OFFSET UNITYSDK_OFFSET(0x286D020)
#define POLYTREE_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x286D080)
#define POLYTREE_CLEAR_OFFSET UNITYSDK_OFFSET(0x286D110)

	inline static constexpr unsigned int PolyTree_TypeDefinitionIndex = 34373;

	class PolyTree : public Il2CppObject
	{
	public:
		Il2CppObject* m_AllPolys; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYTREE_.CTOR_OFFSET))(nullptr);
		}

		PolyNode* GetFirst()
		{
			return (return (PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYTREE_GETFIRST_OFFSET))(nullptr);
		}

		::System::Int32 get_Total()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYTREE_GET_TOTAL_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYTREE_CLEAR_OFFSET))(nullptr);
		}

	};

