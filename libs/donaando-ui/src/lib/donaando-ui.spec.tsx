import { render } from '@testing-library/react';

import DonaandoUi from './donaando-ui';

describe('DonaandoUi', () => {
  it('should render successfully', () => {
    const { baseElement } = render(<DonaandoUi />);
    expect(baseElement).toBeTruthy();
  });
});
