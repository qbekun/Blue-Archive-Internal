#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEOVERHANDLER_ONMOUSEOVERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnMouseOverHandler_TypeDefinitionIndex = 36037;

	class IAsyncOnMouseOverHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnMouseOverAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEOVERHANDLER_ONMOUSEOVERASYNC_OFFSET))(nullptr);
		}

	};
}

