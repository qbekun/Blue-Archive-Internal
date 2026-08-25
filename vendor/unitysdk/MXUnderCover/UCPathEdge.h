#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCCondition; }

#define MXUNDERCOVER_UCPATHEDGE_ISWALKING_OFFSET UNITYSDK_OFFSET(0xDAD280)
#define MXUNDERCOVER_UCPATHEDGE_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0xDAD2B0)
#define MXUNDERCOVER_UCPATHEDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAD2D0)
#define MXUNDERCOVER_UCPATHEDGE_ISLINKED_OFFSET UNITYSDK_OFFSET(0xDAD2E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPathEdge_TypeDefinitionIndex = 9909;

	class UCPathEdge : public Il2CppObject
	{
	public:
		::System::Int32 Priority; // 0x10
		::MXUnderCover::UCCondition* LinkCondition; // 0x18
		::MXUnderCover::UCCondition* WalkCondition; // 0x20

		::System::Boolean IsWalking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATHEDGE_ISWALKING_OFFSET))(nullptr);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATHEDGE_ISMODIFIED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATHEDGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsLinked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATHEDGE_ISLINKED_OFFSET))(nullptr);
		}

	};
}

