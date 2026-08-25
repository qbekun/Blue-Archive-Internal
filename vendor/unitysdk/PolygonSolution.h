#pragma once
#include "unitysdk.h"

#define POLYGONSOLUTION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x285FB50)
#define POLYGONSOLUTION_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x285FA90)

	inline static constexpr unsigned int PolygonSolution_TypeDefinitionIndex = 34321;

	class PolygonSolution : public Il2CppObject
	{
	public:
		Il2CppObject* m_Polygons; // 0x10
		::System::Single m_FrustumHeight; // 0x18

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYGONSOLUTION_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean StateChanged(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + POLYGONSOLUTION_STATECHANGED_OFFSET))(arg, nullptr);
		}

	};

