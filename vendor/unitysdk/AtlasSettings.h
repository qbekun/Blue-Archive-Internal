#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2Int; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }

#define ATLASSETTINGS_GET_ISPOW2_OFFSET UNITYSDK_OFFSET(0xA05CBD0)
#define ATLASSETTINGS_GET_ISSQUARE_OFFSET UNITYSDK_OFFSET(0xA05CC00)

	inline static constexpr unsigned int AtlasSettings_TypeDefinitionIndex = 32647;

	class AtlasSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2Int* resolution; // 0x10
		::UnityEngine::Experimental::Rendering::GraphicsFormat* format; // 0x18
		::System::Boolean useMips; // 0x1C

		::System::Boolean get_isPow2()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASSETTINGS_GET_ISPOW2_OFFSET))(nullptr);
		}

		::System::Boolean get_isSquare()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASSETTINGS_GET_ISSQUARE_OFFSET))(nullptr);
		}

	};

