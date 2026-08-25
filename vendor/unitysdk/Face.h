#pragma once
#include "unitysdk.h"

#define FACE_GET_VERTSCOUNT_OFFSET UNITYSDK_OFFSET(0xA096920)
#define FACE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA097870)
#define FACE_RESET_OFFSET UNITYSDK_OFFSET(0xA0978B0)

	inline static constexpr unsigned int Face_TypeDefinitionIndex = 32827;

	class Face : public Unit
	{
	public:
		Face* _prev; // 0x10
		Face* _next; // 0x18
		Edge* _anEdge; // 0x20
		Face* _trail; // 0x28
		::System::Int32 _n; // 0x30
		::System::Boolean _marked; // 0x34
		::System::Boolean _inside; // 0x35

		::System::Int32 get_VertsCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACE_GET_VERTSCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACE_RESET_OFFSET))(nullptr);
		}

	};

